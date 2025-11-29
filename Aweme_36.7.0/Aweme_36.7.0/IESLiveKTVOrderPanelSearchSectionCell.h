@class IESLiveKTVSearchView, IESLiveKTVOrderPanelSearchSectionModel, IESLiveKTVSearchViewController, UIView;

@interface IESLiveKTVOrderPanelSearchSectionCell : UICollectionViewCell <IESLiveKTVOrderPanelSectionCellProtocol>

@property (retain, nonatomic) IESLiveKTVSearchViewController *searchController;
@property (retain, nonatomic) IESLiveKTVOrderPanelSearchSectionModel *model;
@property (retain, nonatomic) UIView *searchBar;
@property (retain, nonatomic) IESLiveKTVSearchView *searchView;

- (void)renderWithModel:(id)a0;
- (void)exitSearchMode;
- (void)enterSearchMode;
- (void).cxx_destruct;

@end
