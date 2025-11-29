@class NSString;

@interface BizErrInfo : IESLivePBBaseMessage

@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errMsg;

+ (id)descriptor;

@end
