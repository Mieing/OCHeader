@interface AWEHotSpotBrandUpgradeImages : NSObject

+ (id)topHotSpotIcon:(id)a0 otherParams:(id)a1;
+ (id)topHotSpotIconWithHotSpotModel:(id)a0 otherParams:(id)a1;
+ (id)gradientTextWithHotSpotModel:(id)a0 otherParams:(id)a1;
+ (id)hotSpotFireIcon;
+ (id)gradientTextWithChineseText:(id)a0 customTopX:(id)a1;
+ (id)topHotSpotCoverForNewBrandWithHotSpotModel:(id)a0 otherParams:(id)a1;
+ (id)moreViewIconWithBoardTabModel:(id)a0 otherParams:(id)a1;
+ (id)hotSpotIconNameWithBoardType:(unsigned long long)a0 boardSubType:(id)a1;
+ (id)styledTextShadowWithThemeStyle:(long long)a0;
+ (id)labelForStyledText:(BOOL)a0 strokeColor:(id)a1 strokeWidth:(double)a2;
+ (id)styledTopXRank:(long long)a0 textSpace:(id)a1 prefixText:(id)a2;
+ (id)styledChineseText:(id)a0 textLayouts:(id)a1;
+ (id)styledTopXRank:(long long)a0 textSpace:(id)a1;
+ (id)styledCustomTopXRank:(id)a0 textSpace:(id)a1;
+ (id)styledTextLabelWithArrowWithBoardTabModel:(id)a0 textLayouts:(id)a1 otherParams:(id)a2;
+ (id)styledTextLabelWithRank:(long long)a0 boardTabModel:(id)a1 textLayouts:(id)a2 otherParams:(id)a3;
+ (id)iconImageWithBoardTabModel:(id)a0 themeStyle:(long long)a1 iconType:(long long)a2;
+ (id)backgroundGradientLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 themeStyle:(long long)a1;
+ (id)gradientLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layouts:(id)a1;
+ (BOOL)shouldShowTopXWithBoardTabModel:(id)a0;
+ (id)topTitleGradientImageWithRank:(long long)a0 prefixText:(id)a1;
+ (id)chineseTextWithText:(id)a0 textLayouts:(id)a1;
+ (id)topXTextWithRank:(long long)a0 textLayouts:(id)a1;
+ (id)textGradientLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layouts:(id)a1;
+ (id)chineseTopXTextWithBoardTabModel:(id)a0 rank:(long long)a1 textLayouts:(id)a2;
+ (id)tintGradientColorWithView:(id)a0 layouts:(id)a1;
+ (id)styledTextLabelWithCustomTopXRank:(id)a0 boardTabModel:(id)a1 textLayouts:(id)a2 otherParams:(id)a3;
+ (id)gradientTextWithBoardTabModel:(id)a0 rank:(long long)a1 layoutsType:(long long)a2 otherParams:(id)a3;
+ (id)leadingIconForVertialBoardTabModel:(id)a0;
+ (id)sperateIconForVertialBoardTabModel:(id)a0;
+ (id)topTitleGradientImageWithRank:(long long)a0;
+ (id)detailMoreViewIconWithBoardTabModel:(id)a0 otherParams:(id)a1;

@end
