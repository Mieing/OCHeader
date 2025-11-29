@class UIImageView, UILabel;

@interface TLProfileLikeButton : MMUIButton

@property (retain, nonatomic) UIImageView *likeIconImageView;
@property (retain, nonatomic) UILabel *numLabel;
@property (nonatomic) BOOL isLiked;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)updateWithLiked:(BOOL)a0;
- (void)updateWithContact:(id)a0;
- (void)onLikeButtonSelected:(id)a0;
- (void)performLikeAnimate;
- (void).cxx_destruct;

@end
