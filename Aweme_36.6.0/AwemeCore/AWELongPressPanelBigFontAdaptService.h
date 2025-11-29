@class NSString;

@interface AWELongPressPanelBigFontAdaptService : HTSService <AWELongPressPanelBigFontAdaptService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)adaptedFontSizeWithOriginSize:(double)a0;
- (double)settingsCellFontSize;
- (struct CGSize { double x0; double x1; })largeIconImageSize;
- (double)settingCellHeight;
- (long long)lppBigFontAdaptModeConfig;
- (double)interactiveShareContainerViewHeight;
- (double)interactiveShareCellAvatarLength;
- (struct CGSize { double x0; double x1; })avatarStateViewSize;
- (double)avatarStateViewBorderWidth;
- (double)airplaneWidthAndHeight;
- (double)onlineDotWidthAndHeight;
- (double)avatarTitleLabelHeight;
- (double)avatarSubTitleLabelHeight;
- (struct CGSize { double x0; double x1; })interactiveShareCellSize;
- (double)shareToLabelHeight;
- (struct CGSize { double x0; double x1; })shareTextBtnSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })shareTextBtnImageInset;
- (struct CGSize { double x0; double x1; })shareTextBtnImageSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })interactiveShareCollectionViewUIEdgeInset;
- (double)shareCollectionViewTopAndBottomOffset;
- (struct CGSize { double x0; double x1; })activeDotSize;
- (struct CGSize { double x0; double x1; })activeDotContainerSize;
- (double)doubleAvatarViewWH;
- (double)doubleAvatarViewOuterWidth;
- (struct CGSize { double x0; double x1; })rightIconSubviewSize;
- (double)searchPictureSubViewHeight;
- (double)adaptedFontSizeForSpeedSegmentViewWithSize:(double)a0;
- (double)adaptedLeftSpacingForSpeedSegmentWithSpacing:(double)a0;
- (struct CGSize { double x0; double x1; })leftIconSubviewSize;
- (struct CGSize { double x0; double x1; })iconImageSize;
- (double)minimumLineSpacing;

@end
