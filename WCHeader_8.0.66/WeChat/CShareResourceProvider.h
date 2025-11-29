@interface CShareResourceProvider : NSObject

+ (id)GetButtonWithTitle:(id)a0 normalImage:(id)a1 highlightImage:(id)a2 andRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)GetMessageListTimeColor;
+ (id)GetTableViewValueColor;
+ (id)GetGrayBlueColor;
+ (id)GetAlphaImageBackgroundColor;
+ (id)GetNavigationBarTintColor;
+ (id)GetShadowLogoImage;
+ (id)GetContactIndexTitleColor;
+ (id)selfCreateImagePath;
+ (id)GetMessageReceiverCoverImage;
+ (id)GetMessageSenderCoverImage;
+ (id)GetFailReceiverImageWithTriangle:(BOOL)a0;

@end
