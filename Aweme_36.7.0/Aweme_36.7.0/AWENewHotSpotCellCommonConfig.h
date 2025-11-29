@interface AWENewHotSpotCellCommonConfig : NSObject

+ (id)contentParagraphStyle;
+ (double)getScreenHeight;
+ (double)contentTopMargin;
+ (double)actionPanelHeight;
+ (id)nameLabelFont;
+ (double)containerLeftMargin;
+ (double)authorInfoAvatarBadgeSize;
+ (double)commentSourceArrowSize;
+ (double)authorInfoAvatarSize;
+ (double)titleContentFontSize;
+ (id)generalTitleHilightFont;
+ (double)titleContentLineSpacing;
+ (struct CGSize { double x0; double x1; })mediaContentViewAdjustedNewSizeWithRawSize:(struct CGSize { double x0; double x1; })a0 width:(double)a1;
+ (id)commmentSourceFont;
+ (id)actionPanelTextFont;
+ (id)videoTitleFont;
+ (id)titleUserFont;
+ (id)titleUserColor;
+ (double)actionPanelButtonWidth;
+ (long long)getMaxNumberOfRowsIfDisplayFullTextNeeded:(id)a0 withWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })commentImageAdjustedSizeWithRawSize:(struct CGSize { double x0; double x1; })a0 width:(double)a1;
+ (double)containerTopMargin;
+ (double)containerBottomMarginWithComment:(BOOL)a0;
+ (double)mediaTopMargin;
+ (double)actionPanelTopMargin;
+ (id)timeLabelFont;
+ (double)containerRightMargin;
+ (id)timeLabelColor;

@end
