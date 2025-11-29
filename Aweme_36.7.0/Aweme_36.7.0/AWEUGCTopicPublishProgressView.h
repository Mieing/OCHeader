@class UIViewController, AWEUGCTopicTaskProgressView, NSString, UITapGestureRecognizer;
@protocol AWEPublishCancelDialogProtocol;

@interface AWEUGCTopicPublishProgressView : UIView <AWEPublishTaskMessage, AWEPublishCancelDialogDelegate>

@property (retain, nonatomic) AWEUGCTopicTaskProgressView *currentTaskView;
@property (retain, nonatomic) AWEUGCTopicTaskProgressView *nextTaskView;
@property (weak, nonatomic) UITapGestureRecognizer *taskViewGestureRecognizer;
@property (nonatomic) BOOL isInPublish;
@property (nonatomic) BOOL isFirstPublishStimulateAnimating;
@property (retain, nonatomic) id token;
@property (retain, nonatomic) id<AWEPublishCancelDialogProtocol> cancelDialog;
@property (copy, nonatomic) id /* block */ canBeginShowBlock;
@property (copy, nonatomic) id /* block */ addProgressViewInControllerBlock;
@property (copy, nonatomic) id /* block */ removeProgressViewInControllerBlock;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (weak, nonatomic) UIViewController *bindUIViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })taskViewSize;
+ (struct CGSize { double x0; double x1; })viewSize;

- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (void)task:(id)a0 didRemoveWithResult:(long long)a1 error:(id)a2 info:(id)a3;
- (void)task:(id)a0 didResumeAtStage:(id)a1;
- (BOOL)canShow:(id)a0;
- (void)showAddToControllerIfNeeded;
- (void)forceShow:(BOOL)a0;
- (void)p_hide;
- (void)p_removeSubViews;
- (void)configPorgressView;
- (BOOL)configProgressViewCondition:(id)a0;
- (void)p_dequeue;
- (void)p_beginPublish;
- (void)showProgressIfNeed:(id)a0;
- (void)enableCancelAction;
- (void)taskProgressViewTapped:(id)a0;
- (void)replaceCurrentTaskViewWithAnimation;
- (void)configProgressViewWithTaskV2:(id)a0;
- (void)p_enableCancelSheetAfterSeconds:(double)a0 forTask:(id)a1;
- (void)configNextPublishTask:(id)a0 withAnimation:(BOOL)a1;
- (void)publishCancelDialogDidFinish;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)show:(BOOL)a0;
- (void)dismiss:(BOOL)a0;

@end
