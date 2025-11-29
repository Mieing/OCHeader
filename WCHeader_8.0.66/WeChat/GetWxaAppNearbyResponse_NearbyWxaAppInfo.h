@class NSString;

@interface GetWxaAppNearbyResponse_NearbyWxaAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *brandIconUrl;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
