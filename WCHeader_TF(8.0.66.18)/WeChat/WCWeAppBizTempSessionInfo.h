@class NSString, WASessionContentSendMsgInfo, NSData;

@interface WCWeAppBizTempSessionInfo : NSObject

@property (retain, nonatomic) NSString *weAppID;
@property (retain, nonatomic) NSString *weAppUserName;
@property (retain, nonatomic) NSString *businessId;
@property (retain, nonatomic) NSString *sessionFrom;
@property (retain, nonatomic) NSString *pageId;
@property (nonatomic) unsigned long long sceneType;
@property (retain, nonatomic) WASessionContentSendMsgInfo *sendMsgInfo;
@property (retain, nonatomic) NSData *extInfo;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned long long debugModeType;
@property (retain, nonatomic) NSString *sessionTitle;
@property (retain, nonatomic) NSString *sessionSubTitle;
@property (retain, nonatomic) NSString *customHeadImageUrl;

- (id)initWithWeAppID:(id)a0 weAppUserName:(id)a1 businessId:(id)a2 sessionFrom:(id)a3 pageId:(id)a4 sceneType:(unsigned long long)a5 showMessageCard:(BOOL)a6 sendMessageImg:(id)a7 sendMessagePath:(id)a8 sendMessageTitle:(id)a9 extInfo:(id)a10;
- (unsigned long long)fetchFromScene;
- (unsigned long long)fetchPageEnterScene;
- (unsigned long long)fetchPageNewEnterScene;
- (unsigned long long)fetchMsgPageEnterScene;
- (void)updateAppInfoWith:(id)a0;
- (void).cxx_destruct;

@end
