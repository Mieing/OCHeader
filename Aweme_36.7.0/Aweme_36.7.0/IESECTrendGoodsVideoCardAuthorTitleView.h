@class UIImageView, UILabel;

@interface IESECTrendGoodsVideoCardAuthorTitleView : UIView

@property (retain, nonatomic) UIImageView *authorAvatarImage;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)updateWithAuthorImageURL:(id)a0 authorName:(id)a1 isShowArrow:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
