@class NSString, IESIMReadStateDisplayTrackModel;

@interface AWEIMMessageStateComponent : AWEIMFlexComponent <AWEIMMessageStateUIInterface, IESIMReadStateDisplayTrackDelegate>

@property (nonatomic) BOOL enableReadStateDisplayTrack;
@property (retain, nonatomic) IESIMReadStateDisplayTrackModel *readStateTrackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)updateCellHeight;
- (void)p_resendMessage:(id)a0;
- (void)updateStateUI;
- (void)createPresenterIfNeeded;
- (void)p_setupReadStateTracker;
- (void)p_showOrHideViewFormVM:(id)a0;
- (void)stateViewTapped;
- (void)p_addStateVMKVO;
- (void)p_addSendingProgressKVOIfNeeded;
- (void)p_checkReadStateDisplayedOnScreen;
- (void)p_updateStateColor;
- (void)p_resendMessageWhenFormat:(id)a0;
- (id)p_getListVC;
- (void)p_trackReadStateDisplayIfNeed;
- (BOOL)shouldTrackForDelayMessage:(id)a0;
- (void)p_didReceiveReadStatusChangeNoti:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
