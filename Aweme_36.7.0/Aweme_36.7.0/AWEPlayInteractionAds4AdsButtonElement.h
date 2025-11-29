@class DUXButton, NSString;

@interface AWEPlayInteractionAds4AdsButtonElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (copy, nonatomic) id /* block */ showHandler;
@property (copy, nonatomic) id /* block */ colorHandler;
@property (retain, nonatomic) DUXButton *adButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)prepareForActivate;
- (void)colorButton;
- (void)dislikeAction;
- (void)adAction;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)showButton;

@end
