@interface AWEProfileBannerCommon : NSObject

+ (BOOL)enableDynamicCover:(id)a0;
+ (double)bannerHeight:(BOOL)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)normalBannerHeightWithBannerStyle:(unsigned long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)bannerBottomOverlapWithUserModel:(id)a0 isFromHomepage:(BOOL)a1 bannerStyle:(unsigned long long)a2 containerSize:(struct CGSize { double x0; double x1; })a3;
+ (struct CGSize { double x0; double x1; })fixContainerSizeIfNeeded:(struct CGSize { double x0; double x1; })a0;
+ (double)topLeadingNewBetweenScreenUpperEdgeAndAvatarWithBannerStyle:(unsigned long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)bannerBottomOverlapNewWithBannerStyle:(unsigned long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)topLeadingBetweenBannerAndListViewWithBannerStyle:(unsigned long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)avatarBufferHeight;
+ (BOOL)enableTopVideo:(id)a0;
+ (double)editBannerHeightWithContainerSize:(struct CGSize { double x0; double x1; })a0;
+ (double)maxBannerHeightWithContainerSize:(struct CGSize { double x0; double x1; })a0;
+ (double)fullScreenTopOffsetYWithBannerStyle:(unsigned long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)shouldShowNormalBannerViewWithUserModel:(id)a0;
+ (id)timingFunction;

@end
