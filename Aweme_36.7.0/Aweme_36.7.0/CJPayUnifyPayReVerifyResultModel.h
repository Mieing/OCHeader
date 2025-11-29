@class NSDictionary;

@interface CJPayUnifyPayReVerifyResultModel : NSObject

@property (nonatomic) unsigned long long resultCode;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSDictionary *zgConfirmParams;

- (void).cxx_destruct;

@end
