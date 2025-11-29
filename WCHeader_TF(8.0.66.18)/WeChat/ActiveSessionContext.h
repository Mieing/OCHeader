@class NSString, SdkUIContext, NSMutableArray;

@interface ActiveSessionContext : WXPBGeneratedMessage

@property (nonatomic) unsigned long long time;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) SdkUIContext *sdkId;
@property (retain, nonatomic) NSString *chat;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSString *sns;
@property (retain, nonatomic) NSString *textStatus;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *baseId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *controllerSessionBuffer;
@property (retain, nonatomic) NSString *localAudioFileMd5;
@property (nonatomic) unsigned int baseIdisSharedFrom3Rd;
@property (retain, nonatomic) NSString *favId;
@property (retain, nonatomic) NSString *sourceUser;
@property (retain, nonatomic) NSString *miniAppId;
@property (retain, nonatomic) NSMutableArray *extInfo;
@property (retain, nonatomic) NSString *shareFromAppId;
@property (nonatomic) unsigned int listenIdType;
@property (retain, nonatomic) NSMutableArray *extinfo2;

+ (void)initialize;

@end
