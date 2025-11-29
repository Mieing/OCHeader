@class NSString, NSNumber, NSDictionary;

@interface TTAThirdAccountModel : TTADataRespModel

@property (retain, nonatomic) NSString *open_id;
@property (retain, nonatomic) NSNumber *user_id;
@property (copy, nonatomic) NSString *platform_screen_name;
@property (copy, nonatomic) NSString *profile_image_url;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *platform_uid;
@property (copy, nonatomic) NSString *platform_app_id;
@property (copy, nonatomic) NSString *sec_platform_uid;
@property (retain, nonatomic) NSNumber *expires_in;
@property (retain, nonatomic) NSNumber *expired_time;
@property (retain, nonatomic) NSNumber *modify_time;
@property (copy, nonatomic) NSDictionary *extra;

- (BOOL)tta_modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
