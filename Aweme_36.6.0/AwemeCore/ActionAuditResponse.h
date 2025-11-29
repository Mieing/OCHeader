@class ActionAuditResponse_ResponseData;

@interface ActionAuditResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ActionAuditResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
