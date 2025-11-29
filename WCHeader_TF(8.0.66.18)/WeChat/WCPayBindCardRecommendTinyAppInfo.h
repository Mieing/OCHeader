@class NSString;

@interface WCPayBindCardRecommendTinyAppInfo : NSObject

@property (retain, nonatomic) NSString *tinyapp_name;
@property (retain, nonatomic) NSString *tinyapp_logo;
@property (retain, nonatomic) NSString *tinyapp_desc;
@property (retain, nonatomic) NSString *tinyapp_username;
@property (retain, nonatomic) NSString *tinyapp_path;
@property (retain, nonatomic) NSString *activity_tinyapp_btn_text;
@property (nonatomic) unsigned int tinyapp_version;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
