@class IESGCPPBGameDetailOfficialAccount, IESGCPPBTextAdditionalModel, IESGCPPBRankListAdditionalModel;

@interface IESGCPAdditionalDescriptionItem : NSObject

@property (nonatomic) int type;
@property (retain, nonatomic) IESGCPPBTextAdditionalModel *simpleTextItem;
@property (retain, nonatomic) IESGCPPBRankListAdditionalModel *rankItem;
@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccount *officialAccountItem;

- (void).cxx_destruct;

@end
