@class NSString, CJPayOrderConfirmResponse;

@interface CJPayUnifyPayProcessResultModel : NSObject

@property (nonatomic) unsigned long long resultCode;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (copy, nonatomic) NSString *tradeStatus;

- (void).cxx_destruct;

@end
