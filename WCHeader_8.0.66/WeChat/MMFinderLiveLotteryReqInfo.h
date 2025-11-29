@class MMFinderLiveMessageGiftInfo, MMFinderLiveMessageLotteryInfo;

@interface MMFinderLiveLotteryReqInfo : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MMFinderLiveMessageLotteryInfo *lotteryInfo;
@property (retain, nonatomic) MMFinderLiveMessageGiftInfo *giftInfo;

- (BOOL)fromPrizeType:(unsigned int)a0 lotteryNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1 giftNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a2;
- (BOOL)isLotteryType;
- (BOOL)isGiftType;
- (void).cxx_destruct;

@end
