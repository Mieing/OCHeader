@class NSString, BDXContext, LunaRecommendDataSource, UIView, AWEMusicFeedViewModel, AWEMusicDSPEventModel;
@protocol MusicService, BDXViewContainerProtocol;

@interface LunaPlayerDiversionItemViewController : UIViewController <BDXContainerLifecycleProtocol, LunaCycleViewItemProtocol>

@property (retain, nonatomic) id model;
@property (retain, nonatomic) AWEMusicFeedViewModel *feedViewModel;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isCurrent;
@property (nonatomic) BOOL isModelChanged;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) BDXContext *context;
@property (weak, nonatomic) LunaRecommendDataSource *recommendDataSource;
@property (nonatomic) BOOL lynxFinished;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (weak, nonatomic) id<MusicService> musicService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)itemDidAppear;
- (id)pageEventParams;
- (id)displayView;
- (void)attachModel:(id)a0 identifier:(id)a1;
- (void)currentPageWillChangeAnimation:(BOOL)a0;
- (void)itemDidDisappear;
- (void)mainFeed_viewDidAppear;
- (void)mainFeed_viewWillAppear;
- (void)mainFeed_showSubscriberInterceptIfNeeded;
- (void)mainFeed_viewWillDisappear;
- (void)mainFeed_viewDidDisappear;
- (id)p_lynxUrl;
- (id)p_songParamList:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)eventParams;

@end
