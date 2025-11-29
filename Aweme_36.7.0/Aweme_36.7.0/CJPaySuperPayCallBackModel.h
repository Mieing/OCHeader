@class NSString, NSDictionary;

@interface CJPaySuperPayCallBackModel : JSONModel

@property (nonatomic) unsigned long long channelType;
@property (nonatomic) unsigned long long resultType;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSDictionary *paymentInfo;

- (id)initWithChannelType:(unsigned long long)a0 resultType:(unsigned long long)a1 response:(id)a2;
- (void).cxx_destruct;

@end
