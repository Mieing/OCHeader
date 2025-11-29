@class NSString;

@interface AuditInfo : IESLivePBBaseMessage

@property (nonatomic) int auditType;
@property (nonatomic) int auditStatus;
@property (copy, nonatomic) NSString *rejectReason;

+ (id)descriptor;

@end
