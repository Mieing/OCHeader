@class NSNumber, TTAUserAuditInfoItem;

@interface TTAPGCUserAuditInfoItem : TTADataRespModel

@property (retain, nonatomic) NSNumber *is_personal_pgc;
@property (retain, nonatomic) NSNumber *is_auditing;
@property (retain, nonatomic) NSNumber *audit_expire_time;
@property (retain, nonatomic) TTAUserAuditInfoItem *audit_info;

- (void).cxx_destruct;

@end
