@class NSString, NSDictionary;

@interface HardWareItem : MMObject <NSCopying>

@property (nonatomic) unsigned int uiHardWareShowType;
@property (retain, nonatomic) NSString *nsRankID;
@property (retain, nonatomic) NSString *nsRankTitle;
@property (retain, nonatomic) NSString *nsRankDisplay;
@property (retain, nonatomic) NSString *nsScoreTitle;
@property (retain, nonatomic) NSString *nsScoreDisplay;
@property (retain, nonatomic) NSString *nsTipDisplay;
@property (retain, nonatomic) NSString *nsColor;
@property (retain, nonatomic) NSString *nsHighLightColor;
@property (retain, nonatomic) NSString *nsLineColor;
@property (retain, nonatomic) NSString *nsHighLightLineColor;
@property (retain, nonatomic) NSString *nsFontColor;
@property (retain, nonatomic) NSString *nsChampionUsername;
@property (retain, nonatomic) NSString *nsDisplayUserName;
@property (retain, nonatomic) NSString *nsThumbUrl;
@property (retain, nonatomic) NSString *nsNotifyTitle;
@property (nonatomic) unsigned int uiTimeStamp;
@property (retain, nonatomic) NSString *stateIconId;
@property (retain, nonatomic) NSString *stateText;
@property (nonatomic) unsigned int stateExpireTime;
@property (retain, nonatomic) NSDictionary *extDict;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (BOOL)IsExpired;
- (void).cxx_destruct;

@end
