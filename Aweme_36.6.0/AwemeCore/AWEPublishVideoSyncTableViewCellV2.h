@class UIImageView, AWEPublishVideoSyncGuideView, UIStackView;

@interface AWEPublishVideoSyncTableViewCellV2 : AWENewPublishTableCell

@property (retain, nonatomic) UIStackView *iconContainer;
@property (retain, nonatomic) UIImageView *moreIcon;
@property (retain, nonatomic) AWEPublishVideoSyncGuideView *guideView;

- (void)setAwe_disableEdit:(BOOL)a0;
- (void)remakeLayout;
- (void)updateWithVideoSyncModel:(id)a0;
- (void)configGuideView:(BOOL)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
