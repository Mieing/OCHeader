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

- (void)setExtinfo2:(id)a0;
- (id)extinfo2;
- (void)setListenIdType:(unsigned int)a0;
- (unsigned int)listenIdType;
- (void)setShareFromAppId:(id)a0;
- (id)shareFromAppId;
- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setMiniAppId:(id)a0;
- (id)miniAppId;
- (void)setSourceUser:(id)a0;
- (id)sourceUser;
- (void)setFavId:(id)a0;
- (id)favId;
- (void)setBaseIdisSharedFrom3Rd:(unsigned int)a0;
- (unsigned int)baseIdisSharedFrom3Rd;
- (void)setLocalAudioFileMd5:(id)a0;
- (id)localAudioFileMd5;
- (void)setControllerSessionBuffer:(id)a0;
- (id)controllerSessionBuffer;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setBaseId:(id)a0;
- (id)baseId;
- (void)setListenId:(id)a0;
- (id)listenId;
- (void)setBizUsername:(id)a0;
- (id)bizUsername;
- (void)setFinderUsername:(id)a0;
- (id)finderUsername;
- (void)setTextStatus:(id)a0;
- (id)textStatus;
- (void)setSns:(id)a0;
- (id)sns;
- (void)setMsgId:(id)a0;
- (id)msgId;
- (void)setChat:(id)a0;
- (id)chat;
- (void)setSdkId:(id)a0;
- (id)sdkId;
- (void)setScene:(unsigned long long)a0;
- (unsigned long long)scene;
- (void)setTime:(unsigned long long)a0;
- (unsigned long long)time;

@end
