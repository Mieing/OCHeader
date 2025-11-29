@class BaseRequest, NSData, NSString;

@interface ReportSearchWxaRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long searchId;
@property (retain, nonatomic) NSData *searchBuf;
@property (nonatomic) int scene;
@property (nonatomic) unsigned int exposure;
@property (nonatomic) unsigned int stayTime;
@property (nonatomic) int click;
@property (nonatomic) unsigned long long clickTimestamp;
@property (nonatomic) unsigned int pos;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long sessionId;

+ (void)initialize;

@end
