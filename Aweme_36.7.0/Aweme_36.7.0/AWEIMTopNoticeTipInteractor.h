@class AWEIMMessageBaseViewController, AWEIMTopNoticeTipView, AWEIMTopNoticeTipViewConfig, NSString;
@protocol AWEIMTopNoticeTipInteractorProtocol;

@interface AWEIMTopNoticeTipInteractor : AWEIMComponentBase <AWEIMMessageBaseVCLayoutAction, AWEIMFloatingViewDispatchProtocol, AWEIMTopNoticeTipInteractorInterface>

@property (retain, nonatomic) AWEIMTopNoticeTipView *noticeTipView;
@property (retain, nonatomic) AWEIMMessageBaseViewController *vcParent;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) AWEIMTopNoticeTipViewConfig *config;
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

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)viewDidChangeBackgroundImage:(BOOL)a0;
- (void)dismissView:(BOOL)a0;
- (void)showTipViewWithConfig:(id)a0;
- (void)dismissViewWithoutMessageListMove:(BOOL)a0;
- (struct CGSize { double x0; double x1; })getNoticeTipSize;
- (void)layoutViews;
- (void).cxx_destruct;

@end
