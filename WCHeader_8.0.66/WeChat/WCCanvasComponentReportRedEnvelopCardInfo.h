@class NSString;

@interface WCCanvasComponentReportRedEnvelopCardInfo : MMObject

@property (nonatomic) int subType;
@property (nonatomic) int isDoubleCard;
@property (nonatomic) unsigned int expCnt;
@property (nonatomic) unsigned int btnClkCnt;
@property (nonatomic) unsigned int linkClkCnt;
@property (retain, nonatomic) NSString *giveCardId;

- (id)initWithSubType:(int)a0 isDoubleCard:(int)a1 giveCardId:(id)a2;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
