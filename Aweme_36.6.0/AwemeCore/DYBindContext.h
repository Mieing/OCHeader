@class NSString, NSDictionary, UIViewController;

@interface DYBindContext : NSObject

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long useType;
@property (copy, nonatomic) id /* block */ didFinishBindBlock;
@property (copy, nonatomic) id /* block */ didCancelBindBlock;
@property (nonatomic) BOOL isRebind;
@property (retain, nonatomic) NSDictionary *rebindRouterParams;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL rebindPhoneAddVerifyProgress;
@property (retain, nonatomic) UIViewController *startShowVC;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
