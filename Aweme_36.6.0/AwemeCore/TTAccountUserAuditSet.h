@class TTAccountCommonMediaUserAuditEntity, TTAccountUserAuditEntity, NSDictionary, TTAccountEditUserProfileActivityTipsModel, TTAccountVerifiedUserAuditEntity, TTAccountMediaUserAuditEntity;

@interface TTAccountUserAuditSet : TTAccountBaseEntity

@property (retain, nonatomic) TTAccountUserAuditEntity *currentUserEntity;
@property (retain, nonatomic) TTAccountVerifiedUserAuditEntity *verifiedUserAuditEntity;
@property (retain, nonatomic) TTAccountMediaUserAuditEntity *pgcUserAuditEntity;
@property (retain, nonatomic) TTAccountCommonMediaUserAuditEntity *commonUserAuditEntity;
@property (copy, nonatomic) NSDictionary *bgInfo;
@property (copy, nonatomic) NSDictionary *pgc_edit_info;
@property (copy, nonatomic) NSDictionary *common_edit_info;
@property (copy, nonatomic) NSDictionary *rp_edit_info;
@property (retain, nonatomic) TTAccountEditUserProfileActivityTipsModel *editUserProfileActivityTipsModel;

- (void).cxx_destruct;
- (id)initWithUserModel:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
