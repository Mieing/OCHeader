@class NSString, NSDictionary, TTAccountEditUserProfilePendantInfo, NSNumber;

@interface TTAccountUserAuditEntity : TTAccountBaseEntity

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userDescription;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *backgroundURL;
@property (retain, nonatomic) NSNumber *gender;
@property (copy, nonatomic) NSString *birthday;
@property (copy, nonatomic) NSString *industry;
@property (copy, nonatomic) NSString *area;
@property (copy, nonatomic) NSDictionary *bgInfo;
@property (copy, nonatomic) NSDictionary *live_info;
@property (copy, nonatomic) NSDictionary *pgc_edit_info;
@property (copy, nonatomic) NSDictionary *common_edit_info;
@property (copy, nonatomic) NSDictionary *rp_edit_info;
@property (retain, nonatomic) TTAccountEditUserProfilePendantInfo *pendantInfo;

- (id)initWithAuditModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
