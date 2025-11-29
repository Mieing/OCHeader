@interface AWEIMSharePanelBigFontManager : NSObject

+ (double)simpleShareScale;
+ (double)imShareTitleFontSize;
+ (double)imShareGoodsTitleFontSize;
+ (BOOL)isFromSharePanel;
+ (void)setIsFromSharePanel:(BOOL)a0;
+ (double)imShareInputImageSize;
+ (double)imShareInputFontSize;
+ (double)imShareCellWidth;
+ (double)imShareCloseButtonTopRightMargin;
+ (double)imShareSearchButtonImageH;
+ (double)imShareSearchButtonTitleImageW;
+ (double)imShareSearchButtontTopRightMargin;
+ (double)imShareTitleHeight;
+ (double)imShareCloseButtonBottomMargin;
+ (double)imShareSubTitleHeight;
+ (double)imShareSubTitleFontSize;
+ (double)imShareCloseButtonImageSize;
+ (double)imShareSearchTitleFontSize;
+ (double)imShareListHeight;
+ (double)imShareSubTitleTopMargin;
+ (double)imShareCellHeight;
+ (double)imShareGoodsInputContentHeight;
+ (double)imShareInputContentHeight;
+ (double)shareAdaptValueWithKey:(id)a0;
+ (BOOL)enableSharePanelBigFont;
+ (id)shareDefaultSizeDict;
+ (double)shareElderValueForKey:(id)a0 defaultValue:(double)a1;
+ (id)shareElderSizeDict;
+ (double)imShareCellTitleFontSize;
+ (double)imShareCellSubTitleFontSize;
+ (double)imShareCellSubTitleHeight;

@end
