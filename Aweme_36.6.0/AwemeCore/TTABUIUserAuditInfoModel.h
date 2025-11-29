@class NSString, TTAUserAuditInfoItem, NSDictionary;

@interface TTABUIUserAuditInfoModel : TTADataRespModel

@property (nonatomic) BOOL is_auditing;
@property (nonatomic) int audit_status;
@property (nonatomic) int last_update_time;
@property (copy, nonatomic) NSString *unpass_reason;
@property (retain, nonatomic) TTAUserAuditInfoItem *audit_info;
@property (copy, nonatomic) NSDictionary *details;

- (void).cxx_destruct;

@end
