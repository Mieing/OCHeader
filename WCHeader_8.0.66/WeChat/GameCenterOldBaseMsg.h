@class GameCenterMsgControlInfo, NSString, GameCenterMsgBubbleInfoOld, GameCenterMsgActionInfo, GameCenterMsgAppInfo;

@interface GameCenterOldBaseMsg : GameCenterBaseMsg

@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) GameCenterMsgAppInfo *appInfo;
@property (retain, nonatomic) GameCenterMsgBubbleInfoOld *bubbleInfoOld;
@property (retain, nonatomic) GameCenterMsgControlInfo *controlInfo;
@property (retain, nonatomic) NSString *formatContent;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) GameCenterMsgActionInfo *actionInfo;

+ (id)parseFromMsgWrap:(id)a0;
+ (id)parseFromDbItem:(id)a0;

- (id)initWithXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)parseEntranceInfoOld:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)parseFloatLayerInfoOld:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)parseBubbleInfoOld:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)getNotifyContent;
- (id)transBubbleInfo:(id)a0;
- (id)getMsgCenterContent;
- (id)getSourceInfo;
- (id)getMsgCardInfo;
- (BOOL)isExpired;
- (BOOL)notInMsgCenter;
- (id)appid;
- (id)getNoticeid;
- (unsigned int)createTime;
- (int)getMsgReportType;
- (void).cxx_destruct;

@end
