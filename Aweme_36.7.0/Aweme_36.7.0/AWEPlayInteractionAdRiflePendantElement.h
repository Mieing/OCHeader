@class AWEAdPendantRifleView, NSString;
@protocol AWEAdTigerFromEastManager;

@interface AWEPlayInteractionAdRiflePendantElement : AWEPlayInteractionLeftElement <AWEBDARifleViewDelegate, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEAdPendantRifleView *pendantView;
@property (nonatomic) long long pendantShowType;
@property (weak, nonatomic) id<AWEAdTigerFromEastManager> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (void)preFetchDataIfNeeded:(id)a0 isTV:(BOOL)a1;
+ (void)removeTVPreFetchData:(id)a0;
+ (void)removeFeedPreFetchData;
+ (void)initPedantDiskCache;
+ (void)trackAdRiflePendant:(id)a0 resultType:(long long)a1 extraData:(id)a2 awemeModel:(id)a3 preLoadType:(long long)a4;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)trackWithEvent:(id)a0 label:(id)a1 refer:(id)a2 extraData:(id)a3;
- (id)lynxBridges;
- (void)tryShowRiflePedantViewInSplashCell:(id)a0;
- (void)trackAdRiflePendant:(id)a0 resultType:(long long)a1 extraData:(id)a2 preLoadType:(long long)a3;
- (void)sendFoldContentEvent;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)applicationDidEnterBackground;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)context;

@end
