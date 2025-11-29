@interface AWEUserUILayoutInfo : NSObject

+ (Class)aAWEUserModuleConfigCommonClass;
+ (BOOL)isLowEndMachine;
+ (double)ambientHeaderHeight;
+ (BOOL)isHalfScreenLogin;
+ (Class)aAWEUserModuleServiceDOUYINSSAdapterClass;
+ (void)updateLoginUserContextHalfScreen:(BOOL)a0;
+ (BOOL)padIsHighlyCompactWithViewSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isShowPadTheme;
+ (struct CGSize { double x0; double x1; })padHalfScreenContainerSize;
+ (double)ambientHeaderHeightWithIsDeviceVertical:(BOOL)a0;
+ (double)padContentTopMargin:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)showNormalImageHeader;
+ (double)padBottomUtilTopMarginWithViewSize:(struct CGSize { double x0; double x1; })a0;
+ (id)halfScreenLayoutModel;
+ (double)normalImageHeaderHeight;
+ (BOOL)isPadOpaqueHeader;
+ (id)normalImageHeaderURL;
+ (id)normalImageHeaderDefaultImage;
+ (BOOL)isAmbientBigOrSmall;
+ (BOOL)isPad;
+ (double)zoomFactor;
+ (BOOL)isSmallScreen;
+ (long long)contentLayoutStyle;

- (id)aAWEUserModuleConfigCommon;
- (id)aAWEUserModuleServiceDOUYINSSAdapter;

@end
