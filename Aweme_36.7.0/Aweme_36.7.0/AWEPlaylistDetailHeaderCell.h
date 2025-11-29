@class NSString, AWEPlaylistInfoModel, AWEPlaylistDetailHeaderView;
@protocol AWEPlaylistDetailHeaderCellDelegate;

@interface AWEPlaylistDetailHeaderCell : UITableViewCell <AWEPlaylistDetailHeaderViewDelegate>

@property (retain, nonatomic) AWEPlaylistInfoModel *model;
@property (retain, nonatomic) AWEPlaylistDetailHeaderView *headerView;
@property (nonatomic) BOOL hideCollect;
@property (nonatomic) BOOL hidePublish;
@property (nonatomic) BOOL hideOwnerArrow;
@property (weak, nonatomic) id<AWEPlaylistDetailHeaderCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (void)p_updateUI;
- (void)headerHeightDidChangeWithFoldStatus:(BOOL)a0;
- (void)updateConfigModel:(id)a0;
- (void)updatePublishButtonGrayOut:(BOOL)a0;
- (void)showPublishGuideBubble;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)playlistDescription;

@end
