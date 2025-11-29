@class NSDictionary, CJPayHalfVerifySMSViewController;

@interface CJPaySignCardResultModel : NSObject

@property (nonatomic) unsigned long long resultCode;
@property (retain, nonatomic) CJPayHalfVerifySMSViewController *verifySMSVC;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;

@end
