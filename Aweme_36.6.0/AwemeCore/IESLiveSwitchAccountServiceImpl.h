@class NSString, UIViewController;

@interface IESLiveSwitchAccountServiceImpl : NSObject <IESLiveSwitchAccountService>

@property (weak, nonatomic) UIViewController *currentLiveViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldShowSwitchItem;
- (void)updateCurrentLiveViewController:(id)a0 andCurrentContext:(id)a1;
- (void)switchAccountWithSource:(id)a0 roomID:(id)a1 streamData:(id)a2 andTrackContextParams:(id)a3;
- (BOOL)didHasSwitchAccountRecordStorage;
- (void)dismissLastLiveViewController;
- (void)reenterRoomWithRoomID:(id)a0 streamData:(id)a1 andTrackContextParams:(id)a2;
- (void).cxx_destruct;

@end
