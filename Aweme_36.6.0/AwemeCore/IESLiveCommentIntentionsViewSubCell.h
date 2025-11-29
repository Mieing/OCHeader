@class UIImageView, UIView;

@interface IESLiveCommentIntentionsViewSubCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *divingLineView;

- (void)setLeftSeparatorLine:(BOOL)a0;
- (void)refreshWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
