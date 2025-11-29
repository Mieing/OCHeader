@class NSString, WxaLiteAppInfo, BaseResponse;

@interface LaunchBusinessWxaappResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *pathAndQuery;
@property (nonatomic) BOOL canUseTransparentBackground;
@property (nonatomic) BOOL needCache;
@property (nonatomic) unsigned int cacheDuration;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) WxaLiteAppInfo *liteAppInfo;

+ (void)initialize;

@end
