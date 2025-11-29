@class WidgetLaunchAction, WidgetVersionInfo, CheckJsApiInfo, WxaWidgetSetting, BaseResponse;

@interface LaunchWxaWidgetResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WidgetLaunchAction *launch;
@property (retain, nonatomic) CheckJsApiInfo *checkJsApi;
@property (retain, nonatomic) WidgetVersionInfo *versionInfo;
@property (retain, nonatomic) WxaWidgetSetting *setting;

+ (void)initialize;

@end
