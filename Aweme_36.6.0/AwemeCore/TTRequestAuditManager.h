@interface TTRequestAuditManager : NSObject

@property BOOL disableReqAuditFilter;

+ (id)shareInstance;

- (void)parseTNCReqAuditConfig:(id)a0;
- (void)processReqHeaders:(id)a0 rmHeaderKeys:(id)a1 auditFilterLog:(id *)a2;
- (void)runRequestAuditFilter:(id)a0 requestAuditFilterObjects:(id)a1;
- (id)init;

@end
