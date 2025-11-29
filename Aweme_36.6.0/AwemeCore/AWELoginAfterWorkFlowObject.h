@class UINavigationController, AWELoginAfterWorkFlowConfig, UIViewController;

@interface AWELoginAfterWorkFlowObject : NSObject

@property (nonatomic) long long workFlowID;
@property (retain, nonatomic) AWELoginAfterWorkFlowConfig *config;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;

+ (Class)aAWEUserCommonAdapterClass;

- (void)checkNewUserEdit;
- (id)aAWEUserCommonAdapter;
- (id)initWithConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)execute;
- (void)finishWithResult:(id)a0;
- (void)finish;

@end
