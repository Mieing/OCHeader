@class UILabel, NSString, UIView;

@interface AWEPlayInteractionVideoHasPurchasedElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView *outsideContainerView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *hasPurchasedLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)makeConstraint;
- (id)attributedTextWithText:(id)a0;
- (id)trackShowExtraParams;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
