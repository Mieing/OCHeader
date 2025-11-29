@class NSString;

@interface WCPayRedirectUrlInfo : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *app_version;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *button_name;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
