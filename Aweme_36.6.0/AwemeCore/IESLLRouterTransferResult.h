@class NSError, UIViewController;

@interface IESLLRouterTransferResult : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) UIViewController *resultVC;

- (void).cxx_destruct;
- (id)init;

@end
