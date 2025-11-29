@class CJPayOrderConfirmResponse;

@interface CJPayUnifyPayConfirmResultModel : NSObject

@property (nonatomic) unsigned long long resultCode;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;

- (void).cxx_destruct;

@end
