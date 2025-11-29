@class UILabel, UIView, MMUIButton;
@protocol WCFinderSearchContactReusableViewDelegate;

@interface WCFinderSearchContactReusableView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (retain, nonatomic) UIView *blankView;
@property (weak, nonatomic) id<WCFinderSearchContactReusableViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)onClickMore:(id)a0;
- (void)updateUIWith:(id)a0 isShowMore:(BOOL)a1;
- (void).cxx_destruct;

@end
