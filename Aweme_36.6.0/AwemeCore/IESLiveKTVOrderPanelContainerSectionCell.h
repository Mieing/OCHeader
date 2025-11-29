@class IESLiveKTVOrderPanelContainerSectionModel;

@interface IESLiveKTVOrderPanelContainerSectionCell : UICollectionViewCell <IESLiveKTVOrderPanelSectionCellProtocol>

@property (retain, nonatomic) IESLiveKTVOrderPanelContainerSectionModel *model;

- (void)willDisPlay;
- (void)renderWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
