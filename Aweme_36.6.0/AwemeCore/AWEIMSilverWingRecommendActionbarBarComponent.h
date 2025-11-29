@class IESIMGrowingTextView, NSString, AWEIMInputTextBarView;
@protocol IESIMHttpTask;

@interface AWEIMSilverWingRecommendActionbarBarComponent : AWEIMComponentBase <AWEIMSyncPriorityDispatchObjectProtocol, AWEIMMessageListBottomFloatingViewProtocol, AWEIMMessageBaseVCLayoutAction, AWEIMMessageListInputModuleAction, AWEIMInputVIewControllerAction, AWEIMInputTextBarViewDelegate>

@property (retain, nonatomic) AWEIMInputTextBarView *chatRecommendedTopicsView;
@property (weak, nonatomic) IESIMGrowingTextView *textView;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL isInputTextValid;
@property (nonatomic) BOOL isInputTypeValid;
@property (retain, nonatomic) id<IESIMHttpTask> prevTask;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)viewDidChangeBackgroundImage:(BOOL)a0;
- (id)viewToDisplayInBottomContainer;
- (BOOL)canShowBarWhenInputTypeChangedTo:(long long)a0;
- (void)inputStateDidChangeWithText:(id)a0 withGrowingTextView:(id)a1;
- (void)p_bind;
- (void)p_dismiss;
- (BOOL)p_shouldShow;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (void)inputTextBarView:(id)a0 didSelectItem:(id)a1 indexPath:(id)a2;
- (void)inputTextBarView:(id)a0 willShowItem:(id)a1 indexPath:(id)a2;
- (void)p_trackRecommendActionbarWithEvent:(id)a0 model:(id)a1 index:(long long)a2;
- (void)p_display;
- (void)p_checkAndDispatchOrDismiss;
- (void)p_dispatch;
- (void).cxx_destruct;

@end
