@interface MMUIUtil : NSObject

+ (float)getMaxZoomScale:(id)a0;
+ (double)profilePageSheetHeight;
+ (void)headImageJumpToProfile:(id)a0 withViewController:(id)a1 Scence:(unsigned int)a2;
+ (void)headImageJumpToProfile:(id)a0 withViewController:(id)a1 Scence:(unsigned int)a2 delegate:(id)a3;
+ (id)headImageShowProfilePageSheet:(id)a0 withViewController:(id)a1 Scence:(unsigned int)a2;
+ (id)genContactInfoVCWithParam:(id)a0 withViewController:(id)a1 Scence:(unsigned int)a2;
+ (id)getSeparator;
+ (id)calOrderdAccessibilityElements:(id)a0;
+ (long long)accessibilityOrderView1:(id)a0 compareToView2:(id)a1;
+ (BOOL)isPIPWindow:(id)a0;

@end
