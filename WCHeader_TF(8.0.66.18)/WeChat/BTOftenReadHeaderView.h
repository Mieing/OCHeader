@class MMUILabel;

@interface BTOftenReadHeaderView : UIView

@property (retain, nonatomic) MMUILabel *firstTitleLabel;
@property (retain, nonatomic) MMUILabel *secondTitleLabel;
@property (nonatomic) double titleSpacing;

- (id)init;
- (void)initSubviews;
- (void)updateWithFirstTitle:(id)a0 secondTitle:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
