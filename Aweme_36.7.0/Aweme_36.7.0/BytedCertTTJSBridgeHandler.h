@class NSDictionary, UIViewController;

@interface BytedCertTTJSBridgeHandler : NSObject

@property (copy, nonatomic) NSDictionary *baseParams;
@property (weak, nonatomic) UIViewController *fromViewController;

- (void)startWithSuperViewController:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (id)initWithParams:(id)a0;

@end
