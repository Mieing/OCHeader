@class UILabel, IESECWinFollowBuyObject, UIView;

@interface IESECWinFollowBuyCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *followBuyLabel;
@property (retain, nonatomic) UIView *vLineView;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) IESECWinFollowBuyObject *object;

- (id)followAttributedText:(id)a0;
- (id)recommendAttributedText:(id)a0;
- (void)updateWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
