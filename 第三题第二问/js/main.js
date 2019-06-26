$(document).ready(function(){
	maphover();
});

function maphover(){
	var self = "";
	// $(".city").hover(
	// 	function(){
	// 		self = $(this);
	// 		self.addClass("hover").children("div").show();
	// 	},
	// 	function(){
	// 		self = $(this);
	// 		self.children("div").hide();
	// 		self.removeClass("hover");
	// 	}
	// );
	$(".city").click(
		function(){
			self = $(this);
			self.addClass("hover").children("div").show();

			
		},
		function(){
			self = $(this);
			
			self.removeClass("hover");

			var df=$(this).attr("title");
			if(df == '没去过，做计划'){
				var a=prompt("制定你的计划");
				if(a == null || a == ' '||a ===""){
					$(this).attr("title",'没去过，做计划');
				}else {
					$(this).attr("title",a);
					self.children("div").css("display","block");
				}
			}

			

			
		}
	);
		
};
