@class NSDictionary, IESECLiveReplayDataStore, UIView, UIViewController;
@protocol IESECLiveReplayDataStore, IESECLiveReplayInteractionProtocol, IESECLiveReplayDataStoreOwner;

@interface AWELiveReplayServiceManager : NSObject <AWELiveReplayServiceManagerInterface>

@property (retain, nonatomic) UIView<IESECLiveReplayInteractionProtocol, IESECLiveReplayDataStoreOwner> *interactionView;
@property (retain, nonatomic) id<IESECLiveReplayDataStore> dataStore;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL hasChangedPlaySpeed;
@property (readonly, nonatomic) IESECLiveReplayDataStore *store;
@property (weak, nonatomic) UIViewController *feedCellViewController;
@property (weak, nonatomic) UIViewController *playVideoViewController;
@property (weak, nonatomic) UIViewController *interactionViewController;
@property (nonatomic) BOOL isRecall;

+ (void)markProductDetailPage:(BOOL)a0;
+ (BOOL)checkProductDetailPageHasShow;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (id)commonTrackParamsWithModel:(id)a0;
- (id)searchExtraParamsWithLogExtraDic:(id)a0;
- (id)searchTrackParamsWithSearchExtraDic:(id)a0;
- (void)updateDataStore:(id)a0;
- (BOOL)isConformsPlayVideoProtocol;
- (void)updateProgress:(double)a0 totalDuration:(double)a1;
- (void)videoDidScroll;
- (void)showPlayIcon:(BOOL)a0;
- (void)videoDidFinishPlay;
- (void)followStatusChange:(long long)a0;
- (void)configViewWithModel:(id)a0;
- (void)willDisplayWithModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)playerController;
- (void)dealloc;

@end
