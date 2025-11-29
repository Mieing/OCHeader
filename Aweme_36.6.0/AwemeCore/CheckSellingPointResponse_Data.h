@class NSString;

@interface CheckSellingPointResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL isPass;
@property (copy, nonatomic) NSString *rejectReason;
@property (nonatomic) int rejectReasonType;

+ (id)descriptor;

@end
