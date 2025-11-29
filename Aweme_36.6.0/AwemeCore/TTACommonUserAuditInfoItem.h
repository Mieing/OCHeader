@class NSNumber, TTAUserAuditInfoItem;

@interface TTACommonUserAuditInfoItem : TTADataRespModel

@property (retain, nonatomic) NSNumber *is_auditing;
@property (retain, nonatomic) NSNumber *audit_type;
@property (retain, nonatomic) NSNumber *is_personal_pgc;
@property (retain, nonatomic) TTAUserAuditInfoItem *audit_info;

- (void).cxx_destruct;

@end
