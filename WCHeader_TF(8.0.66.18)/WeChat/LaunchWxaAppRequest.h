@class WxaWebLaunchInfo, NSString, CommRequestSource, BaseRequest, WxaAppBaseInfo, WxaJumpInfo, WxaMaterialInfo, WxaClientPublicLibInfo, WxaPluginInfo;

@interface LaunchWxaAppRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) WxaAppBaseInfo *wxaAppInfo;
@property (nonatomic) unsigned int requestType;
@property (retain, nonatomic) WxaPluginInfo *pluginInfo;
@property (retain, nonatomic) WxaClientPublicLibInfo *publicLib;
@property (retain, nonatomic) WxaWebLaunchInfo *webLaunchInfo;
@property (retain, nonatomic) WxaJumpInfo *jumpInfo;
@property (nonatomic) int performanceLevel;
@property (retain, nonatomic) NSString *instanceId;
@property (retain, nonatomic) NSString *wxaUserName;
@property (nonatomic) BOOL isParallelRequest;
@property (nonatomic) BOOL isSdkPrefetch;
@property (retain, nonatomic) NSString *shortLink;
@property (retain, nonatomic) CommRequestSource *requestSource;
@property (retain, nonatomic) WxaMaterialInfo *materialInfo;
@property (nonatomic) unsigned int launchMode;
@property (retain, nonatomic) NSString *sceneNote;
@property (nonatomic) BOOL isFallback;
@property (nonatomic) BOOL isFirstLaunch;

+ (void)initialize;

@end
