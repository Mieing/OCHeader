@class AWEPlaylistInfoModel, AWEPlaylistAnchorDetailHeaderView;
@protocol AWEPlaylistAnchorDetailHeaderCellDelegate;

@interface AWEPlaylistAnchorDetailHeaderCell : UITableViewCell

@property (retain, nonatomic) AWEPlaylistInfoModel *model;
@property (retain, nonatomic) AWEPlaylistAnchorDetailHeaderView *headerView;
@property (weak, nonatomic) id<AWEPlaylistAnchorDetailHeaderCellDelegate> delegate;

- (void)p_setup;
- (void)p_updateUI;
- (void)updateConfigModel:(id)a0;
- (void)updateStarCount:(long long)a0;
- (BOOL)p_canShowDesc;
- (BOOL)canShowCreateEntry;
- (double)heightWithDescription:(id)a0;
- (BOOL)p_canPassRestriction;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)playlistDescription;

@end
