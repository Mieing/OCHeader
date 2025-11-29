@class NSData, ScopeRiskWxaAppInfo;

@interface ScopeRiskPopUpInfo : WXPBGeneratedMessage

@property (nonatomic) int routeType;
@property (retain, nonatomic) NSData *wording;
@property (retain, nonatomic) NSData *leftButtonWording;
@property (retain, nonatomic) NSData *rightButtonWording;
@property (retain, nonatomic) NSData *rightButtonH5Url;
@property (retain, nonatomic) ScopeRiskWxaAppInfo *wxaAppInfo;
@property (nonatomic) int nativeRouteType;

+ (void)initialize;

@end
