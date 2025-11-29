@class WCFinderMusicEventHeaderRecommendListVM, UITableViewDiffableDataSource, NSString, UILabel, UITableView;
@protocol WCFinderMusicEventHeaderRecommendListViewDelegate;

@interface WCFinderMusicEventHeaderRecommendListView : MMUIView <UITableViewDelegate, WCFinderMusicEventHeadTableViewCellDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableViewDiffableDataSource *diffDataSource;
@property (retain, nonatomic) WCFinderMusicEventHeaderRecommendListVM *viewModel;
@property (weak, nonatomic) id<WCFinderMusicEventHeaderRecommendListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)tableViewHeightWithMusicTopicInfo:(id)a0;
+ (double)heightWithMusicTopicInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViewModel;
- (void)setupSubViews;
- (void)applyDiffSnapshot;
- (void)updateWithMusicTopicInfo:(id)a0;
- (void)onfinderMusicEventHeadTableViewCellClickActionButton:(id)a0;
- (void).cxx_destruct;

@end
