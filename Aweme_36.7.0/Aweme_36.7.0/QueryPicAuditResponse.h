@class QueryPicAuditResponse_Data;

@interface QueryPicAuditResponse : IESLivePBBaseMessage

@property (retain, nonatomic) QueryPicAuditResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
