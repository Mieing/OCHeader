@class IESECGoodsDetailTipsSectionModel;

@interface IESECGoodsDetailDescriptionViewModel : IESECGoodsDetailPageBaseViewModel

@property (retain, nonatomic) IESECGoodsDetailTipsSectionModel *tipsSection;

- (void)setupViewModel;
- (void)updateDataModel:(id)a0;
- (void)setupCurrentViewSize;
- (void)configTipsSectionData;
- (void).cxx_destruct;

@end
