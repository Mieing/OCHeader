@class GameLifeInfo, NSMutableDictionary, MessageExposureStrategy, GameCenterEntranceInfo, GameCenterMsgFloayLayerInfo, GameCenterNotifyContent, GameCenterWePkgPreloadInfo, NSString, GameCenterMsgSimplePbData, GameCenterMsgCenterContent, GameCenterMsgBannerInfo, NSArray, GameMsgExtraData, GamePreloadResourceData;

@interface GameCenterBaseMsg : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int msgRecvTime;
@property (nonatomic) unsigned int msgRecvServerTime;
@property (nonatomic) unsigned int firstExposureTime;
@property (retain, nonatomic) NSString *svrMsgId;
@property (retain, nonatomic) NSString *weightStr;
@property (retain, nonatomic) NSString *mergeId;
@property (nonatomic) BOOL wifiFlag;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int mergeCount;
@property (nonatomic) unsigned int alreadyMergedCount;
@property (nonatomic) BOOL disableReport;
@property (retain, nonatomic) GameCenterEntranceInfo *entranceInfo;
@property (retain, nonatomic) GameCenterMsgFloayLayerInfo *floatLayerInfo;
@property (retain, nonatomic) GameCenterMsgBannerInfo *bannerInfo;
@property (retain, nonatomic) GameLifeInfo *gameLifeInfo;
@property (retain, nonatomic) GameMsgExtraData *gameMsgExtraData;
@property (retain, nonatomic) GamePreloadResourceData *preloadResourceData;
@property (nonatomic) BOOL needReExposure;
@property (nonatomic) unsigned int msgExposureState;
@property (retain, nonatomic) NSArray *userInfoList;
@property (retain, nonatomic) NSMutableDictionary *jumpInfoDic;
@property (retain, nonatomic) GameCenterWePkgPreloadInfo *wePkgPreloadInfo;
@property (nonatomic) unsigned int maxExposureCnt;
@property (nonatomic) unsigned int msgExposureCnt;
@property (nonatomic) unsigned int completeExposureCnt;
@property (nonatomic) int redPointQueueType;
@property (nonatomic) int msgStateOptions;
@property (retain, nonatomic) MessageExposureStrategy *exposureStrategy;
@property (nonatomic) float exposureRateScore;
@property (nonatomic) float calcluateScore;
@property (retain, nonatomic) NSString *calculateInfo;
@property (retain, nonatomic) NSString *pushId;
@property (retain, nonatomic) NSString *quickResponseContentId;
@property (nonatomic) BOOL isGreet;
@property (nonatomic) unsigned int relationType;
@property (retain, nonatomic) NSString *originMsg;
@property (retain, nonatomic) GameCenterNotifyContent *notifyContent;
@property (retain, nonatomic) GameCenterMsgCenterContent *msgCenterContent;
@property (retain, nonatomic) GameCenterMsgSimplePbData *simplePbData;
@property (retain, nonatomic) NSMutableDictionary *exposureScoreDict;
@property (retain, nonatomic) NSMutableDictionary *fullExposureScoreDict;
@property (retain, nonatomic) NSString *contentId;

+ (struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)getRootNode:(id)a0 XmlReader:(struct CXmlReader { int x0; struct XmlReaderNode_t *x1; char *x2; BOOL x3; BOOL x4; BOOL x5; })a1;
+ (id)msgWithType:(unsigned int)a0 xmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (id)parseFromMsgWrap:(id)a0 RootNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (id)parseFromDbItem:(id)a0;

- (id)initWithXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)parseJumpInfo:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)halfScreenFormNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)getNotifyContent;
- (id)getMsgCenterContent;
- (void)updateMsgCenterV2Content;
- (BOOL)weightMoreThan:(id)a0;
- (id)getJumpInfo:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)getJumpInfo:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 jumpIdAttrributeName:(const char *)a1;
- (id)parseUserInfo:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (int)getMsgReportType;
- (BOOL)isExpired;
- (double)timeBeforeExpire;
- (BOOL)isOverMaxExposureCnt;
- (BOOL)notInMsgCenter;
- (unsigned int)createTime;
- (id)appid;
- (id)getNoticeid;
- (id)getReportExtData;
- (BOOL)isPluginMsg;
- (id)description;
- (void).cxx_destruct;

@end
