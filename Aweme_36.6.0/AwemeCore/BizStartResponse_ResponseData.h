@class NSString;

@interface BizStartResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *bizExtra;
@property (nonatomic) int pushType;
@property (nonatomic) long long bizId;

+ (id)descriptor;

@end
