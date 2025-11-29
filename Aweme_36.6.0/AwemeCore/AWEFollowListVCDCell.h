@class UILabel, UIButton, UIView;

@interface AWEFollowListVCDCell : UICollectionViewCell

@property (retain, nonatomic) UIView *vcdView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *loadMoreButton;
@property (copy, nonatomic) id /* block */ loadmoreButtonClickedBlock;

- (void)configCell:(id)a0 hasLoadMoreButton:(BOOL)a1;
- (void)configFooterViewWihtText:(id)a0 hasLoadMoreButton:(BOOL)a1;
- (void)loadMoreButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
