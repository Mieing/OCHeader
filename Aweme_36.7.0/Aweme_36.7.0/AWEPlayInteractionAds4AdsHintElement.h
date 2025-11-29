@class NSString;

@interface AWEPlayInteractionAds4AdsHintElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (copy, nonatomic) id /* block */ showHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)prepareForActivate;
- (void)showHintLabel;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
