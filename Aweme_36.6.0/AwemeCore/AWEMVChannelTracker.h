@class AWEMVChannelPageContext;

@interface AWEMVChannelTracker : NSObject

@property (weak, nonatomic) AWEMVChannelPageContext *context;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)beginToTrackCurrentChannelWithAction:(long long)a0;
- (void)trackPadChannelRefreshWithMonitor:(id)a0;
- (void)trackStayTime:(double)a0;
- (void)trackCardAnchorShowWithModel:(id)a0;
- (void)trackLoadMoreData:(unsigned long long)a0 result:(id)a1;
- (void)trackMediumVideoClientHoldPanelShowWithModel:(id)a0 cardType:(id)a1 extraDict:(id)a2;
- (id)feedCacheParams;
- (void)trackBackToTabWithEnterFrom:(id)a0;
- (void)trackRefreshDataWithMethod:(id)a0 result:(id)a1;
- (void)trackFirstScreenStayTime:(double)a0;
- (void)trackRefreshData:(unsigned long long)a0 result:(id)a1;
- (void)trackSlideWithDirection:(id)a0;
- (void)trackMediumVideoTabSortSuccessWithTabOrder:(long long)a0;
- (void)trackCacheVisibility:(BOOL)a0;
- (void)trackCachePreloadVideo:(id)a0;
- (void)trackMediumVideoClientCoverPlayWithModel:(id)a0 costTime:(double)a1;
- (void)trackMediumVideoClientGuideWithModel:(id)a0;
- (void)trackMediumvideoUGShowWithModel:(id)a0;
- (void)trackBannerCloseWithModel:(id)a0 banner:(id)a1 bannerIndex:(long long)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
