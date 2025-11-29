@interface WCAdDynamicFeedCommonUtil : NSObject

+ (id)getValueForOriValue:(id)a0 fromAdInfo:(id)a1;
+ (id)substringFor:(id)a0 prefix:(id)a1 suffix:(id)a2;
+ (id)invokeGetValueFor:(id)a0 fromAdInfo:(id)a1;
+ (id)invokeGetFirstNotBlankValueFor:(id)a0 fromAdInfo:(id)a1;
+ (id)getValueForParams:(id)a0 fromAdInfo:(id)a1;
+ (id)getDisplayTypeForOriValue:(id)a0 dataItem:(id)a1 index:(unsigned long long)a2;
+ (id)getLocalImageWithResource:(id)a0 dataItem:(id)a1 index:(unsigned long long)a2;
+ (struct CGSize { double x0; double x1; })calculateMediaSizeWithMediaItem:(id)a0 dataItem:(id)a1;
+ (struct CGSize { double x0; double x1; })calculateCardMediaSize;
+ (void)parseAdjustedValues:(id)a0 dataItem:(id)a1;
+ (id)calculateAdjustedLength:(id)a0 dataItem:(id)a1;
+ (id)calculateAdjustedMargin:(id)a0 dataItem:(id)a1;
+ (id)generateLayoutWithDataItem:(id)a0 animationHandler:(id /* block */)a1;
+ (id)appendViewWithElementInfo:(id)a0 dataItem:(id)a1 index:(unsigned long long)a2 isLayoutContainer:(BOOL *)a3;
+ (BOOL)needToGenEmptyLayoutWithElementInfo:(id)a0;
+ (BOOL)shouldKeepOutOfLayoutForElement:(id)a0;
+ (BOOL)shouldViewEnabledUserInteractionForElementInfo:(id)a0 adInfo:(id)a1;
+ (void)appendLayoutWithContainer:(id)a0 flex:(void *)a1 dataItem:(id)a2 elementInfo:(id)a3 animationHandler:(id /* block */)a4;
+ (void)appendLayoutWithContainer:(id)a0 flex:(void *)a1 dataItem:(id)a2 index:(unsigned long long)a3 elementInfo:(id)a4 animationHandler:(id /* block */)a5;
+ (void)layoutCommonItemWithFlex:(void *)a0 elementInfo:(id)a1;
+ (id)genLabelWithContent:(id)a0 textColor:(id)a1 font:(id)a2 lineSpacing:(double)a3 numberOfLines:(long long)a4 textAlign:(long long)a5;
+ (id)genTextViewWithElementInfo:(id)a0 adInfo:(id)a1;
+ (id)genImageViewWithElementInfo:(id)a0 adInfo:(id)a1 dataItem:(id)a2 index:(unsigned long long)a3;
+ (id)genButtonViewWithElementInfo:(id)a0 adInfo:(id)a1;
+ (id)genEasyBuyViewWithElementInfo:(id)a0;
+ (id)genTagViewWithElementInfo:(id)a0 adInfo:(id)a1;
+ (id)genSeparatorViewWithElementInfo:(id)a0;
+ (id)genGridViewWithElementInfo:(id)a0 adInfo:(id)a1 dataItem:(id)a2;
+ (id)genSpecialContainerViewWithElementInfo:(id)a0;
+ (id)fetchTextFontWithInfo:(id)a0;
+ (id)fetchTextFontWithInfo:(id)a0 defaultFontSize:(double)a1;
+ (id)fetchTextWechatStdFontWithInfo:(id)a0 fontSize:(double)a1 maxFontSize:(double)a2;
+ (double)fetchDynamicCornerRadiusForView:(id)a0;
+ (void)setAllDynamicCornersToView:(id)a0 recursive:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })calcMediaSizeForMediaItem:(id)a0 dataItem:(id)a1 elementInfo:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3;
+ (BOOL)shouldProcessHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 forView:(id)a2;

@end
