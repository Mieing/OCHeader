@class NSString;

@interface AuditPicResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *auditId;
@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
