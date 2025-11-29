@class UILabel, IESECWinLivingProductTailObject, UIView;

@interface IESECWinLivingProductTailCell : UICollectionViewCell <IGListBindable> {
    IESECWinLivingProductTailObject *_object;
}

@property (retain, nonatomic) UIView *lookMoreView;
@property (retain, nonatomic) UILabel *lookMoreLabel;
@property (retain, nonatomic) UILabel *leftParenthesesLabel;
@property (retain, nonatomic) UILabel *productCountLabel;
@property (retain, nonatomic) UILabel *rightParenthesesLabel;

- (void)bindObject:(id)a0;
- (void)updateMoreButtonText;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
