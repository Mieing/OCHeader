@class NSString;

@interface BasicSecurityInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *logo_url;
@property (nonatomic) long long jump_type;
@property (copy, nonatomic) NSString *jump_h5_url;
@property (copy, nonatomic) NSString *tinyapp_username;
@property (copy, nonatomic) NSString *tinyapp_path;
@property (copy, nonatomic) NSString *jump_wording;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
