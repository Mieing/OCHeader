@class NSString, AWEIMConversationContext, AWEIMDefaultFloatView, RxDeferred, AWEIMDefaultFloatViewModel, UITapGestureRecognizer;
@protocol AWEIMMessageListTopFloatingInterface, AWEIMDefaultFloatViewControllerDelegate;

@interface AWEIMDefaultFloatViewController : NSObject <AWEIMSyncPriorityDispatchObjectProtocol, AWEIMDefaultFloatViewDelegate, AWEIMFloatingViewDispatchProtocol, UIGestureRecognizerDelegate>

@property (retain, nonatomic) RxDeferred *showDeferred;
@property (retain, nonatomic) AWEIMDefaultFloatView *floatView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL floatViewIsShowing;
@property (retain, nonatomic) AWEIMConversationContext *context;
@property (retain, nonatomic) id<AWEIMMessageListTopFloatingInterface> floatService;
@property (readonly, nonatomic) AWEIMDefaultFloatViewModel *viewModel;
@property (nonatomic) BOOL showInFloatMode;
@property (weak, nonatomic) id<AWEIMDefaultFloatViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)__handleTapGesture:(id)a0;
- (id)__dismissTopFloat;
- (id)initWithViewModel:(id)a0 context:(id)a1;
- (void)__triggerConfirmAction;
- (void)__createFloatView;
- (void)floatViewConfirmButtonClicked;
- (void)floatViewCloseButtonClicked;
- (id)showTopFloat;
- (id)dismissTopFloat;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
