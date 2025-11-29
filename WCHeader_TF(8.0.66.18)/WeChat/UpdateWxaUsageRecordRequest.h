@class BaseRequest, NSString;

@interface UpdateWxaUsageRecordRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int isFromBackground;
@property (nonatomic) unsigned int versionType;
@property (nonatomic) unsigned int recordType;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int reason;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int commuseFlag;

+ (void)initialize;

@end
