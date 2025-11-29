@class UIButton, NSString, MMFinderLiveTaskId, MMWebImageView, MMUILabel;

@interface MMLiveLeaveMicGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMFinderLiveMgrExt, MMLiveTaskMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) MMWebImageView *micImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIButton *returnBtn;
@property (retain, nonatomic) UIButton *leaveBtn;
@property (retain, nonatomic) MMUILabel *minimizeLabel;
@property (copy, nonatomic) id /* block */ leaveMicBlock;
@property (copy, nonatomic) id /* block */ minimizeLiveBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 scene:(unsigned int)a1;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (void)setupUI;
- (void)layoutUI;
- (void)showWithAnimated:(BOOL)a0;
- (void)updateDetailViewHeight;
- (unsigned long long)reportStyle;
- (id)liveTask;
- (unsigned long long)reportStatus;
- (unsigned long long)reportScene;
- (void)onClickedLeave;
- (void)onClickedReturn;
- (void)onClickedMinimize;
- (void)onClearForExitLiveWithLiveTask:(id)a0;
- (void).cxx_destruct;

@end
