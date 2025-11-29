@class NSString;

@interface GetWebcastInfoResponse_AckConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *msgType;
@property (nonatomic) long long ackType;
@property (nonatomic) long long batchInterval;
@property (nonatomic) long long batchMaxNum;

+ (id)descriptor;

@end
