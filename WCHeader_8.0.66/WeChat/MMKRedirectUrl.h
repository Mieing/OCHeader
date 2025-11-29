@class NSString;

@interface MMKRedirectUrl : NSObject

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *appid;
@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *btnName;

+ (id)KRedirectUrlWithType:(int)a0 appid:(id)a1 appVersion:(id)a2 path:(id)a3 btnName:(id)a4;

- (id)initWithType:(int)a0 appid:(id)a1 appVersion:(id)a2 path:(id)a3 btnName:(id)a4;
- (id)description;
- (void).cxx_destruct;

@end
