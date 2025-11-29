@class NSString, AWEPlaylistInfoModel, AWEPlaylistDetailHeaderView;
@protocol AWECreatePlaylistHeaderCellDelegate;

@interface AWECreatePlaylistHeaderCell : UITableViewCell <AWEPlaylistDetailHeaderViewDelegate>

@property (retain, nonatomic) AWEPlaylistInfoModel *model;
@property (retain, nonatomic) AWEPlaylistDetailHeaderView *headerView;
@property (weak, nonatomic) id<AWECreatePlaylistHeaderCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateUI;
- (void)configureHeaderActions;
- (void)updateConfigModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
