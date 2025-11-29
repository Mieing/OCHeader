@class NSArray, NSString, AWELuckyCatSendGoldCollectPanelIncomeModel, AWELuckyCatSendGoldCollectPanelDIYInfoModel;

@interface AWELuckyCatSendGoldCollectPanelModel : AWELiteBaseApiModel

@property (retain, nonatomic) AWELuckyCatSendGoldCollectPanelIncomeModel *incomeData;
@property (copy, nonatomic) NSArray *interactionRewardList;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWELuckyCatSendGoldCollectPanelDIYInfoModel *DIYInfo;
@property (nonatomic) BOOL hasFreeChance;
@property (nonatomic) BOOL hasBalanceChance;

+ (id)interactionRewardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
