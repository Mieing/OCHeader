@class WCDataItem, NSString, WCAdContinuousLikeBannerInfo;

@interface WCAdContinuousLikeBannerAnimationView : MMUIView <CAAnimationDelegate, IWCAdSocialLikeLogicExt>

@property (retain, nonatomic) WCAdContinuousLikeBannerInfo *bannerInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (nonatomic) double bannerX;
@property (nonatomic) double topBannerY;
@property (nonatomic) double bottomBannerY;
@property (nonatomic) double animationOffsetX;
@property (nonatomic) double animationOffsetY;
@property (nonatomic) int lastBannerStyle;
@property (nonatomic) double lastBannerY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bannerInfo:(id)a1 dataItem:(id)a2 contentItemScene:(unsigned long long)a3;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)calculateAnimationArea;
- (void)playBannerAnimation:(double)a0 bannerStyle:(int)a1;
- (void)playBannerAnimation:(double)a0 bannerStyle:(int)a1 ignoreCheckBottom:(BOOL)a2 originOffsetX:(double)a3 animationDuration:(double)a4;
- (void)playFirstLikeAnimationGroup;
- (double)fetchBannerY;
- (id)createBannerView:(int)a0 bannerY:(double)a1;
- (id)fetchContinuousLikeReportInfo;
- (void)onContinuousLikeCountChanged:(id)a0 contentItemScene:(unsigned long long)a1 likeCount:(int)a2;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
