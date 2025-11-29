@class NSNumber, NSString;

@interface AWEPaidStreamIAASendAwardResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *sendRewardSuccessToastText;
@property (nonatomic) int growthSendRewardCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
