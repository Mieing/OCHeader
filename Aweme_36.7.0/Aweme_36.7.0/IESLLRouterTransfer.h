@class NSString, NSDictionary, UIViewController;

@interface IESLLRouterTransfer : NSObject

@property (copy, nonatomic) NSString *sourceURLString;
@property (copy, nonatomic) NSDictionary *params;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
