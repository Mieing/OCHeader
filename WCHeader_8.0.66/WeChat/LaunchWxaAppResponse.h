@class WxaRuntimeInfo, NSString, CheckJsApiInfo, PublicLibUpdateInfo, LaunchAction, ActionSheetInfo, BaseResponse, WxaOperationInfo;

@interface LaunchWxaAppResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) LaunchAction *launch;
@property (retain, nonatomic) CheckJsApiInfo *checkJsApi;
@property (retain, nonatomic) PublicLibUpdateInfo *publicLibUpdate;
@property (retain, nonatomic) ActionSheetInfo *actionSheet;
@property (retain, nonatomic) WxaOperationInfo *operation;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *opConfig;
@property (retain, nonatomic) WxaRuntimeInfo *runtimeInfo;
@property (nonatomic) unsigned int cacheSeconds;
@property (retain, nonatomic) NSString *openId;
@property (nonatomic) BOOL showThirdBusiTips;

+ (void)initialize;

@end
