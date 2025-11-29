@class BaseRequest, NSString;

@interface GetGameDyeReportInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appStoreUrl;
@property (retain, nonatomic) NSString *extraJsonData;
@property (retain, nonatomic) NSString *wxagAppid;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) BOOL isLaunchApp;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
