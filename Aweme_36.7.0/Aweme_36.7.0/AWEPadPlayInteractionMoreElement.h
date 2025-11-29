@class UIButton, NSString, UIView;
@protocol AWEFeedVideoButtonProtocol;

@interface AWEPadPlayInteractionMoreElement : AWEPlayInteractionRightElement <AWERightElementButtonLayout, AWEPadPlayInteractionMoreElementProtocol>

@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol> *button;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isActive;
@property (retain, nonatomic) UIView *panelPopoverTargetView;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:(id)a0;
- (void)didClickButton;
- (void)trackMoreButtonClick;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)context;

@end
