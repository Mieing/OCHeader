@class AWECodeGenEntButtonInfoModel, AWECodeGenSeriesUniversalCoverLabelModel, AWECodeGenPaidSeriesVipEntranceConfigModel;

@interface AWECodeGenSeriesUIConfigModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenEntButtonInfoModel *detailPageBuyButtonModel;
@property (retain, nonatomic) AWECodeGenEntButtonInfoModel *selectPanelBuyButtonModel;
@property (retain, nonatomic) AWECodeGenSeriesUniversalCoverLabelModel *universalCoverLabelModel;
@property (retain, nonatomic) AWECodeGenEntButtonInfoModel *collectionButtonModel;
@property (retain, nonatomic) AWECodeGenPaidSeriesVipEntranceConfigModel *paidSeriesVipEntranceConfigModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
