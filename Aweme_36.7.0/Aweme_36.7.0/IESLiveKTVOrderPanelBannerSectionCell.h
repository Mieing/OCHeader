@class IESLiveKTVOrderPanelBannerSectionModel, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveKTVOrderPanelBannerSectionCell : UICollectionViewCell <IESLiveKTVOrderPanelSectionCellProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) IESLiveKTVOrderPanelBannerSectionModel *model;

- (void)willDisPlay;
- (void)renderWithModel:(id)a0;
- (id)setupHybridContainer;
- (void).cxx_destruct;
- (void)loadData;

@end
