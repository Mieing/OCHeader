@class NSObject, NSString, UIView;
@protocol IESECLiveRoomContext, IESECPlayBackContainerProtocol, IESECLiveContextProvider, IESECLiveRoom;

@interface IESLivePlaybackECGoodsCardFragment : IESLivePlaybackComponent <IESVSVideoPlayAction, IESLivePlaybackEcommerceService, IESLivePlaybackCustomAutoHideAnimService, IESLivePlaybackSeekAction, IESLivePlaybackCornerToastShowAction, IESLivePlaybackPaywallFreeTrialAction, IESLivePaidStreamActionAdapter, IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) UIView *listView;
@property (nonatomic) double bottomOffset;
@property (nonatomic) double playerOffset;
@property (nonatomic) double toastOffset;
@property (retain, nonatomic) id<IESECLiveRoom> ecLiveRoom;
@property (retain, nonatomic) NSObject<IESECLiveRoomContext> *context;
@property (retain, nonatomic) id<IESECLiveContextProvider> contextProvider;
@property (retain, nonatomic) id<IESECPlayBackContainerProtocol> containerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentDidMount;
- (void)setupContext:(id)a0;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)paidStreamTrialDidPaid:(long long)a0;
- (void)onSeekUpdate:(double)a0;
- (void)addIESECElementViewToContainerService:(id)a0;
- (void)openSkuViewOnContainer:(id)a0;
- (void)portraitViewsTransformToHidden:(BOOL)a0;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoProgressUpdate:(double)a0 duration:(double)a1;
- (void)freeTrialDidStart;
- (void)freeTrialDidFinish;
- (void)freeTrialDidPaied;
- (void)showingToastStatusChange:(BOOL)a0 offset:(double)a1;
- (BOOL)disableECCardLoad;
- (void)loadLiveRoom;
- (void)changeHeight;
- (void).cxx_destruct;

@end
