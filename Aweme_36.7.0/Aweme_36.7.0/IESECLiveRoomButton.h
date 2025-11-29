@class NSString, IESECLiveStateBannerView, IESECLiveReplayDataStore;

@interface IESECLiveRoomButton : UIButton <IESECLiveReplayComponentViewProtocol>

@property (nonatomic) BOOL isFading;
@property (retain, nonatomic) IESECLiveStateBannerView *introducingView;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)dataStoreChanged;
- (void)fadeAnimation;
- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;

@end
