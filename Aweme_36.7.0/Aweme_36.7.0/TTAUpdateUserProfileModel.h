@class TTAUpdateUserExtraProfileItem, NSString, NSDictionary, TTAUserAuditInfoItem, TTAPGCUserAuditInfoItem, TTACommonUserAuditInfoItem, TTAUserVerifiedAuditInfoItem;

@interface TTAUpdateUserProfileModel : TTADataRespModel

@property (copy, nonatomic) NSString *existed_name;
@property (copy, nonatomic) NSString *tip;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *error_description;
@property (copy, nonatomic) NSDictionary *bg_info;
@property (copy, nonatomic) NSDictionary *live_info;
@property (copy, nonatomic) NSDictionary *pgc_edit_info;
@property (copy, nonatomic) NSDictionary *common_edit_info;
@property (copy, nonatomic) NSDictionary *activity_tips;
@property (copy, nonatomic) NSDictionary *rp_edit_info;
@property (retain, nonatomic) TTAUpdateUserExtraProfileItem *attrs;
@property (retain, nonatomic) TTAUserAuditInfoItem *current_info;
@property (retain, nonatomic) TTAPGCUserAuditInfoItem *pgc_audit_info;
@property (retain, nonatomic) TTAUserVerifiedAuditInfoItem *verified_audit_info;
@property (retain, nonatomic) TTACommonUserAuditInfoItem *common_audit_info;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
