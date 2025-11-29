@class AuditPicResponse_Data;

@interface AuditPicResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AuditPicResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
