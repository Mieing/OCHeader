@class NSString;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedEcomUgImmersiveCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (void)bridgeRegisterWithContainer:(id)a0 aweme:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
