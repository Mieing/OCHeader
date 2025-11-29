@class UIButton, NSString, AWEFeedVideoButton, UIView, AWEPlayInteractionDislikeElementViewModel;
@protocol AWEFeedVideoButtonProtocol;

@interface AWEPlayInteractionDislikeElement : AWEPlayInteractionRightElement <AWERightElementButtonLayout, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayInteractionDislikeElementViewModel *viewModel;
@property (retain, nonatomic) AWEFeedVideoButton *dislikeButton;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIButton<AWEFeedVideoButtonProtocol> *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)isInteractionOptEnable;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)aAWEPadModuleAdapter;
- (void)buttonClicked;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)_onAwemeDeleteNotification:(id)a0;
- (void)setupPadElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })a0;
- (void)updateDislikeImage;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
