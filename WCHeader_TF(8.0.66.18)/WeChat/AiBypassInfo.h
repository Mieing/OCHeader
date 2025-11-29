@class NSString, NSMutableArray;

@interface AiBypassInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userNickname;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *networkType;
@property (nonatomic) BOOL isHeadset;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *userUsername;
@property (retain, nonatomic) NSString *mockAppid;
@property (retain, nonatomic) NSMutableArray *robotIdList;
@property (retain, nonatomic) NSString *groupid;
@property (nonatomic) unsigned int masterUin;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) int openScene;

+ (void)initialize;

@end
