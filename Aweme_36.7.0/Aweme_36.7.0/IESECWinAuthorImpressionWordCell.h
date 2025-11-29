@class UILabel;

@interface IESECWinAuthorImpressionWordCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *leftQuotationMarkLabel;
@property (retain, nonatomic) UILabel *impressionWordLabel;
@property (retain, nonatomic) UILabel *impressionWordCountLabel;
@property (retain, nonatomic) UILabel *rightQuotationMarkLabel;

- (void)setupWithConfig:(id)a0;
- (void)setImpressionWordWithWord:(id)a0 count:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpConstraints;

@end
