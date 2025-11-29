@class NSString;

@interface CheckUidValidityResp_Data : IESLivePBBaseMessage

@property (nonatomic) long long firstInvalidRowNumber;
@property (copy, nonatomic) NSString *reason;

+ (id)descriptor;

@end
