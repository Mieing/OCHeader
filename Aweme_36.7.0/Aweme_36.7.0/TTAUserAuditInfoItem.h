@class NSString, NSNumber, NSDictionary;

@interface TTAUserAuditInfoItem : TTADataRespModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *user_description;
@property (copy, nonatomic) NSString *avatar_url;
@property (copy, nonatomic) NSString *background_url;
@property (retain, nonatomic) NSNumber *gender;
@property (copy, nonatomic) NSString *birthday;
@property (copy, nonatomic) NSString *industry;
@property (copy, nonatomic) NSString *area;
@property (copy, nonatomic) NSDictionary *expend_attrs;
@property (copy, nonatomic) NSDictionary *live_info;
@property (copy, nonatomic) NSDictionary *pendant_info;
@property (copy, nonatomic) NSDictionary *pgc_edit_info;
@property (copy, nonatomic) NSDictionary *rp_edit_info;
@property (copy, nonatomic) NSDictionary *bg_info;
@property (copy, nonatomic) NSDictionary *common_edit_info;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
