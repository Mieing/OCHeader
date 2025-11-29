@class NSString, CJPayNavigationController;

@interface CJPayBindCardController : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *bizAuthExperiment;

- (void)p_close;
- (id)p_buildCommonModel;
- (void)startBindCardWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
