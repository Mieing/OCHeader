@interface MessageNodeComponentHelper : NSObject

+ (id)getSourceViewWithTitle:(id)a0 fixedColor:(id)a1 titleColor:(id)a2 iconImage:(id)a3 iconImageUrlString:(id)a4 maxWidth:(double)a5 tailIconUrl:(id)a6 withTailTag:(id)a7 taiDesc:(id)a8 bubbleType:(unsigned long long)a9 separatorColor:(id)a10 extraParams:(id)a11;
+ (id)getSourceViewWithTitle:(id)a0 fixedColor:(id)a1 titleColor:(id)a2 iconImage:(id)a3 iconImageUrlString:(id)a4 maxWidth:(double)a5 withTailTag:(id)a6 bubbleType:(unsigned long long)a7 extraParams:(id)a8;
+ (id)getSourceViewWithTitle:(id)a0 iconImage:(id)a1 iconImageUrlString:(id)a2 maxWidth:(double)a3 withTailTag:(id)a4 bubbleType:(unsigned long long)a5 extraParams:(id)a6;
+ (double)getMessageBackgroundWidth:(id)a0;
+ (double)getMessageBackgroundShorterWidth:(id)a0;
+ (double)getTextMessageNodeWidth:(id)a0;
+ (double)getChatViewControllerWidth:(id)a0;
+ (double)getMessageCssFloatValue:(id)a0 component:(id)a1;
+ (struct CGSize { double x0; double x1; })getImageDisplaySize:(id)a0 originSize:(struct CGSize { double x0; double x1; })a1;

@end
