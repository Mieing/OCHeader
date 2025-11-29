@class NSString;

@interface KvReportItem11404 : KvReportBaseItem

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int newMsgCount;
@property (nonatomic) unsigned int topNewMsgCount;
@property (nonatomic) unsigned int newTopContactMsgCount;
@property (nonatomic) unsigned int newNotificationCount;
@property (nonatomic) unsigned int sessionId;
@property (nonatomic) unsigned int enterTime;
@property (nonatomic) unsigned int source;
@property (copy, nonatomic) NSString *enterRedDotUserName;
@property (nonatomic) unsigned int enterRedDotMid;
@property (nonatomic) unsigned int enterMainFrameBrandPos;
@property (nonatomic) unsigned int enterRedDotMsgType;
@property (nonatomic) unsigned int hasRejectNotification;
@property (nonatomic) unsigned int msgType;
@property (copy, nonatomic) NSString *strategyInfo;
@property (copy, nonatomic) NSString *digestBoldInfo;
@property (nonatomic) unsigned long long exposeId;
@property (nonatomic) unsigned int oftenBizCount;
@property (nonatomic) unsigned int oftenBizGreenDotCount;
@property (copy, nonatomic) NSString *finderFeedExportId;
@property (copy, nonatomic) NSString *netType;
@property (nonatomic) unsigned int isHeadsetOn;
@property (nonatomic) unsigned int isDayMode;
@property (nonatomic) unsigned int exptType;
@property (nonatomic) unsigned int moveBoxMsgTopRet;
@property (nonatomic) unsigned int renderMode;
@property (nonatomic) unsigned int dataMode;
@property (nonatomic) unsigned int exptShowFlag;
@property (nonatomic) unsigned int isControlGroup;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void).cxx_destruct;

@end
