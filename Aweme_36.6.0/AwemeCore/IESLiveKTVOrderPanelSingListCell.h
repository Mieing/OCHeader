@class IESLiveKTVOptimizeListViewModel, IESLiveListView, UILabel, UIView;

@interface IESLiveKTVOrderPanelSingListCell : UICollectionViewCell <IESLiveKTVOrderPanelListProtocol>

@property (retain, nonatomic) IESLiveKTVOptimizeListViewModel *item;
@property (retain, nonatomic) UILabel *songLabel;
@property (retain, nonatomic) UIView *allAddHeader;
@property (retain, nonatomic) IESLiveListView *listView;
@property (nonatomic) BOOL needTrack;

- (void)renderWithSectionModel:(id)a0 index:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })listViewTableViewInset;
- (void)reloadListViewWithNeed:(BOOL)a0;
- (void)addAllMusic;
- (void)reloadListViewWithSortType:(id)a0;
- (void)reloadData;
- (void)scrollToTop;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willDisplay;

@end
