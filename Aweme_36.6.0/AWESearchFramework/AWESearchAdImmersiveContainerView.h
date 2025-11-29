@class NSString, AWESearchVideoView, UIImageView, NSDictionary, AWESearchLiveView, UIView, AWESearchImmersiveModel;
@protocol AWESearchAdImmersiveBannerListViewProtocol, AWESearchAdEggLynxContainerView, AWEAdImmersiveContainerDelegate;

@interface AWESearchAdImmersiveContainerView : UIView <AWESearchAdImmersiveContainerViewProtocol, AWESearchVideoViewPlayerDelegate, AWESearchLiveViewPlayerDelegate, AWESearchAdEggLynxContainerViewDelegate>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWESearchVideoView *videoView;
@property (retain, nonatomic) AWESearchLiveView *liveView;
@property (retain, nonatomic) UIView<AWESearchAdEggLynxContainerView> *adEggContainerView;
@property (retain, nonatomic) UIView<AWESearchAdImmersiveBannerListViewProtocol> *bannerListView;
@property (retain, nonatomic) AWESearchImmersiveModel *model;
@property (weak, nonatomic) id<AWEAdImmersiveContainerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *customExtra;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL isTrackBreak;
@property (nonatomic) BOOL isTrackPlay;
@property (nonatomic) BOOL isMediaUpdateEventSend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modernTransitionContext;
- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)didPlayError:(id)a0;
- (void)didStartStall;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)createVideoView;
- (void)createImageView;
- (void)clearResource;
- (void)searchAdEggLynxContainerView:(id)a0 loadFailedWith:(id)a1;
- (void)searchAdEggLynxContainerView:(id)a0 transToTop:(id)a1;
- (void)didRenderCompletion;
- (void)searchImmersiveBanner:(id)a0;
- (void)searchImmersiveTransToBottom:(id)a0;
- (void)searchImmersiveOpenVideo:(id)a0;
- (void)createLiveView;
- (void)createBannerListView;
- (void)createAdEggView;
- (void)trackSearchVideoEvent:(id)a0;
- (void)trackSearchLiveEvent:(id)a0;
- (void)trackURLWithLabel;
- (struct CGSize { double x0; double x1; })getADImmersiveContainerViewBounds;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)initWithDelegate:(id)a0;
- (void)didEnd;
- (void)didResignActive;
- (void)didStart;
- (void)updateWithModel:(id)a0;
- (void)didStop;
- (void)didPause;

@end
