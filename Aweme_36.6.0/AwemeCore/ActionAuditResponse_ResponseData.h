@class NSString;

@interface ActionAuditResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *data_p;

+ (id)descriptor;

@end
