@class NSMutableArray, UIImageView, UILabel, UIView, UIButton;

@interface IESECGoodsFeedResourceCardWindowView : UIView

@property (retain, nonatomic) UIButton *linkButton;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *followStatusLabel;
@property (retain, nonatomic) UILabel *windowInterestLabel;
@property (retain, nonatomic) UIView *followStatusBackgroundView;
@property (retain, nonatomic) UIImageView *authorAvartarImageView;
@property (retain, nonatomic) NSMutableArray *cardList;

- (void)setupUIWithModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getProductFrameWithIndex:(long long)a0;
- (void).cxx_destruct;

@end
