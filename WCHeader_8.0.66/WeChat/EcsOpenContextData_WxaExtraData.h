@class NSString;

@interface EcsOpenContextData_WxaExtraData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *extraParamInfo;
@property (nonatomic) BOOL forceSilentLaunch;
@property (nonatomic) int forceAppVersion;
@property (nonatomic) BOOL forceHalfPage;
@property (nonatomic) BOOL forceEnableExpandToStatusBarTop;
@property (nonatomic) BOOL forceAutoFullScreenWhenTap;
@property (nonatomic) BOOL forceForbidExpandGesture;
@property (retain, nonatomic) NSString *referrerInfoExtraData;
@property (retain, nonatomic) NSString *sceneNote;

+ (void)initialize;

@end
