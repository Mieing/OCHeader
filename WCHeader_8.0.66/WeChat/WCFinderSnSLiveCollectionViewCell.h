@class WCFinderFeedStaticCoverView, WCFinderFeedContentVM, UIView, UILabel;

@interface WCFinderSnSLiveCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderFeedStaticCoverView *coverView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) UIView *avatorContainerView;
@property (retain, nonatomic) UILabel *shareTipsLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initSubView;
- (void)updateUIWithContentVM:(id)a0;
- (void)updateAvatorContainerView;
- (id)generatorAvatorViewWithHeadUrl:(id)a0;
- (void).cxx_destruct;

@end
