@class EcsGiftJumpInfo, NSString, NSDictionary, EcsGiftCoverInfo, NSArray;

@interface EcsGiftMsgItem : MMObject <NSCopying>

@property (nonatomic) unsigned int subtype;
@property (retain, nonatomic) NSDictionary *giftList;
@property (retain, nonatomic) NSString *wishMessage;
@property (retain, nonatomic) NSString *giftTitle;
@property (nonatomic) unsigned int takeMethod;
@property (retain, nonatomic) NSString *giftMsgId;
@property (retain, nonatomic) NSString *appMsgSign;
@property (retain, nonatomic) EcsGiftJumpInfo *jumpInfo;
@property (nonatomic) unsigned int disableReceive;
@property (retain, nonatomic) NSString *giftSourceName;
@property (retain, nonatomic) EcsGiftCoverInfo *giftCoverInfo;
@property (retain, nonatomic) NSArray *giftLabels;
@property (retain, nonatomic) NSString *giftTitleTemplate;
@property (retain, nonatomic) NSString *recvUserName;
@property (nonatomic) unsigned int ellipsisIndex;
@property (nonatomic) unsigned int fromProductSet;
@property (retain, nonatomic) NSArray *skuInfos;
@property (retain, nonatomic) NSString *drawTimeWording;
@property (nonatomic) unsigned int lotteryMethod;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toXML;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void).cxx_destruct;

@end
