@class NSData, WxaABTestInfoResponse_WxaABTestResponseAppInfo_ComponentData, WxaABTestAppInfo;

@interface WxaABTestInfoResponse_WxaABTestResponseAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) WxaABTestAppInfo *appInfo;
@property (retain, nonatomic) NSData *abtestControlBytes;
@property (retain, nonatomic) WxaABTestInfoResponse_WxaABTestResponseAppInfo_ComponentData *gameRewardsData;

+ (void)initialize;

@end
