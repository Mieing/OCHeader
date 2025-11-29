@class UILabel, CAShapeLayer;

@interface MJSegmentCoverForTextCell : MJSegmentCoverCell

@property (retain, nonatomic) CAShapeLayer *flagLayer;
@property (retain, nonatomic) UILabel *numberLabel;

- (void)commonInit;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupWithSegmentViewModel:(id)a0;
- (void)updateNumber:(long long)a0 showFlag:(BOOL)a1 animated:(BOOL)a2;
- (void).cxx_destruct;

@end
