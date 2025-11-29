@class NSString;

@interface BDUGFlowRouterPlugin : NSObject <AWERouterDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)routerDidCreateViewControllerBeforeTransferWithURLString:(id)a0 targetViewController:(id)a1;

@end
