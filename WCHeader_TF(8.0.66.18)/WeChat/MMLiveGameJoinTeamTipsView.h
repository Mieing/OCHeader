@class NSString, MMFinderLiveTaskId;

@interface MMLiveGameJoinTeamTipsView : MMNormalTipsView <WCFinderLiveExt>

@property (copy, nonatomic) id /* block */ showAction;
@property (copy, nonatomic) id /* block */ reloadAction;
@property (readonly, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)prepareDataWithShowAction:(id /* block */)a0 reloadAction:(id /* block */)a1;
- (void)fetchGameTeamInfo;
- (id)liveTask;
- (void)updateWithTitle:(id)a0 desc:(id)a1 payment:(unsigned int)a2 giftDesc:(id)a3 descAccessibility:(id)a4;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)a0 appMsgGameTeamInfo:(id)a1;
- (void)dismissWithAnimationFromPosition:(struct CGPoint { double x0; double x1; })a0 toPosition:(struct CGPoint { double x0; double x1; })a1 animating:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dismissWithoutAnimation;
- (void)dismissWithAnimation;
- (void).cxx_destruct;

@end
