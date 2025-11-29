@class CJPayBDCreateOrderResponse, NSDictionary, NSArray, CJPayDefaultChannelShowConfig, UIViewController;

@interface BDChooseCardCommonModel : NSObject

@property (copy, nonatomic) NSDictionary *bizParams;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (copy, nonatomic) NSArray *notSufficientFundsIDs;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (copy, nonatomic) id /* block */ backToMainVCBlock;
@property (copy, nonatomic) id /* block */ chooseCardCompletion;
@property (copy, nonatomic) id /* block */ dismissLoadingBlock;
@property (copy, nonatomic) id /* block */ bindCardBlock;
@property (nonatomic) unsigned long long comeFromSceneType;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (nonatomic) BOOL hasSfficientBlockBack;
@property (weak, nonatomic) UIViewController *fromVC;

- (void).cxx_destruct;
- (id)init;

@end
