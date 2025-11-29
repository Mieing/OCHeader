@class NSString;

@interface MMAppRefreshTokenAppInfo : MMObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appIconUrl;
@property (copy, nonatomic) NSString *appNickname;
@property (copy, nonatomic) NSString *universalLink;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *sdkBundleID;
@property (copy, nonatomic) NSString *contextID;

- (id)description;
- (void)fillWithOpenParameter:(id)a0;
- (void)fillWithWCPayOpenParameter:(id)a0;
- (void).cxx_destruct;

@end
