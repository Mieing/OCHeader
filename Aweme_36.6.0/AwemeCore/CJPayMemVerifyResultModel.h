@class NSDictionary, UIViewController;

@interface CJPayMemVerifyResultModel : NSObject

@property (nonatomic) long long resultType;
@property (weak, nonatomic) UIViewController *verifyVC;
@property (copy, nonatomic) NSDictionary *paramsDict;
@property (copy, nonatomic) NSDictionary *extraData;

- (void).cxx_destruct;

@end
