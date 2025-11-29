@class NSDictionary, NSString, UIViewController;

@interface IESECRouterTransfer : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *URLString;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (copy, nonatomic) id /* block */ completion;

- (void)addCustomHandleWithParam:(id /* block */)a0;
- (void)preHandleWithSeachParam;
- (void).cxx_destruct;

@end
