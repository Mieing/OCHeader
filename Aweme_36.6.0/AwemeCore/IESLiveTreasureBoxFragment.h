@class NSString, IESLiveTreasureBoxToolBarController, IESLiveTaskCenterEntranceApi, IESLiveTreasureBoxTaskTimer;

@interface IESLiveTreasureBoxFragment : IESLiveRoomComponent <HTSLiveGiftActions>

@property (retain, nonatomic) IESLiveTreasureBoxToolBarController *toolBarController;
@property (retain, nonatomic) IESLiveTreasureBoxTaskTimer *boxTaskTimer;
@property (retain, nonatomic) IESLiveTaskCenterEntranceApi *api;
@property (nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)giftTreasureBoxWillShow;
- (void)p_dealWithTaskCenterEntranceResponse:(id)a0;
- (void)subscribeBackEndDataWithCompletion:(id /* block */)a0;
- (void)p_fetchTaskCenterEntranceWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
