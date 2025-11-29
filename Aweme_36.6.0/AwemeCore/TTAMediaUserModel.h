@class NSNumber, NSString;

@interface TTAMediaUserModel : TTADataRespModel

@property (retain, nonatomic) NSNumber *media_id;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatar_url;
@property (retain, nonatomic) NSNumber *user_verified;
@property (retain, nonatomic) NSNumber *display_app_ocr_entrance;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
