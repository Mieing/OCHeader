@class UIColor, NSString, IESGCPDetailThemeConfig;

@interface IESGCPAudienceDetailViewConfig : NSObject

@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL hasSafeArea;
@property (nonatomic) BOOL isOpenAsFullScreen;
@property (nonatomic) BOOL isIPhoneLandscape;
@property (nonatomic) BOOL panGestureEnable;
@property (nonatomic) struct CGSize { double width; double height; } contentViewSize;
@property (nonatomic) double contentViewRightOffset;
@property (nonatomic) double contentViewBottomOffset;
@property (nonatomic) double contentViewCornerRadius;
@property (nonatomic) unsigned long long rectCornerMask;
@property (retain, nonatomic) UIColor *titleHeaderColor;
@property (nonatomic) double titleHeaderHeight;
@property (nonatomic) double titleShowOffset;
@property (nonatomic) double segmentSlideViewTopLayoutLength;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } dismissTransform;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) double portraitHeight;
@property (nonatomic) double portraitMaxHeight;
@property (nonatomic) double segmentSlideViewHeaderTopInset;
@property (retain, nonatomic) UIColor *segmentSlideViewTopAreaBgColor;
@property (nonatomic) double segmentSlideViewFullScreenSpacing;
@property (nonatomic) double segmentSlideViewHalfScreenSpacing;
@property (retain, nonatomic) NSString *closeImageName;
@property (nonatomic) BOOL showCloseOnInit;
@property (nonatomic) double closeTopOffset;
@property (nonatomic) double backgroundPortraitHeight;
@property (retain, nonatomic) UIColor *indicatorViewColor;
@property (retain, nonatomic) IESGCPDetailThemeConfig *detailThemeConfig;
@property (nonatomic) BOOL useHalfScreenConfig;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isLoadingState;

- (id)initWithIsLandscape:(BOOL)a0 hasSafeArea:(BOOL)a1 scence:(unsigned long long)a2;
- (void)updateWithDetailThemeConfig:(id)a0 useHalfScreenConfig:(BOOL)a1;
- (id)initWithIsLandscape:(BOOL)a0 hasSafeArea:(BOOL)a1 scence:(unsigned long long)a2 isOpenAsFullScreen:(BOOL)a3;
- (void)updateLiveAudienceDetailConfigFrom:(id)a0 useHalfScreenConfig:(BOOL)a1;
- (void)updateVideoAudienceDetailConfigFrom:(id)a0 useHalfScreenConfig:(BOOL)a1;
- (void)setCommonConfig;
- (void)setupLiveAudienceDetailConfig;
- (void)setupVideoAudienceDetailConfig;
- (BOOL)p_isIPhoneLandscape;
- (id)p_indicatorViewColor;
- (id)p_titleHeaderColor;
- (id)p_closeImageName;
- (BOOL)p_showCloseOnInit;
- (double)p_closeTopOffset;
- (BOOL)p_panGestureEnable;
- (double)p_contentViewCornerRadius;
- (BOOL)isIPadDevice;
- (double)segmentSlideViewSpacingWithDetailThemeConfig:(id)a0 useHalfScreenConfig:(BOOL)a1 isFullScreen:(BOOL)a2;
- (id)closeImageNameFromDetailThemeConfig:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLive;
- (void)resetConfig;
- (void)setupConfig;

@end
