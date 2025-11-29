@class BaseRequest, NSString;

@interface MusicLiveReportForwardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *entityId;
@property (nonatomic) int scene;

+ (void)initialize;

@end
