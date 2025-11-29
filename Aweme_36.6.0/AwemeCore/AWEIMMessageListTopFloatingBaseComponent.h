@class AWEIMTopNoticeTipView, AWEIMTopNoticeTipViewConfig, NSString;
@protocol AWEIMMessageListTopFloatingInterface, AWEIMTopNoticeTipInteractorProtocol;

@interface AWEIMMessageListTopFloatingBaseComponent : AWEIMComponentBase <AWEIMMessageListBackgroundAction, AWEIMMessageBaseVCLayoutAction, AWEIMFloatingViewDispatchProtocol>

@property (retain, nonatomic) AWEIMTopNoticeTipView *noticeTipView;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) AWEIMTopNoticeTipViewConfig *config;
@property (weak, nonatomic) id<AWEIMMessageListTopFloatingInterface> floatingService;
@property (weak, nonatomic) id<AWEIMTopNoticeTipInteractorProtocol> topTipViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)dismissView:(BOOL)a0;
- (void)showTipViewWithConfig:(id)a0;
- (void)p_setupNoticeView:(id)a0;
- (void)p_layoutTipView:(id)a0;
- (void).cxx_destruct;

@end
