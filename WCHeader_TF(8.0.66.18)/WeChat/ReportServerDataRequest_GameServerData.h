@class NSString, NSData;

@interface ReportServerDataRequest_GameServerData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int appState;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *compiledMd5;
@property (retain, nonatomic) NSString *eventInfo;
@property (retain, nonatomic) NSString *hostAppId;

+ (void)initialize;

@end
