@class NSMutableDictionary;

@interface WCCanvasComponentReportRedEnvelopInfo : WCCanvasComponentReportBasicInfo

@property (retain, nonatomic) NSMutableDictionary *hbCards;

- (id)initWithCid:(id)a0;
- (id)dictionaryRepresentation;
- (id)getCardInfoKeyForSubType:(int)a0 isDoubleCard:(int)a1;
- (void).cxx_destruct;

@end
