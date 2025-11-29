@class DigestExposureInfo, NSString, DigestMsgCardInfo, MsgCardExposureInfo, InBoxResortContext, BizTimeLineAdCardInfo, InnerMsgInfo;

@interface MsgCard : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int msgStatus;
@property (nonatomic) unsigned int sendTime;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *buffer;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) DigestExposureInfo *digestExposureInfo;
@property (retain, nonatomic) MsgCardExposureInfo *exposureInfo;
@property (retain, nonatomic) DigestMsgCardInfo *digestCardInfo;
@property (retain, nonatomic) InBoxResortContext *inboxResortContext;
@property (nonatomic) unsigned int bizuin;
@property (nonatomic) unsigned int msgid;
@property (nonatomic) unsigned int maxIdx;
@property (nonatomic) unsigned long long localId;
@property (nonatomic) unsigned int picType;
@property (retain, nonatomic) NSString *extraData;
@property (nonatomic) unsigned int recycleCardType;
@property (retain, nonatomic) BizTimeLineAdCardInfo *adCardInfo;
@property (retain, nonatomic) InnerMsgInfo *innerInfo;

+ (void)initialize;

@end
