@class NSString;

@interface AWERCBaseVerifyViewController : UIViewController

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *traceURL;

+ (id)instanceWithConfig:(id /* block */)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)viewDidLoad;

@end
