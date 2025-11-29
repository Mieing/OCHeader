@class MMUILabel;

@interface MMLiveStatCompositeLabel : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;

- (id)init;
- (void)layoutSubviews;
- (void)initView;
- (void)updateWithTitle:(id)a0 subtitle:(id)a1;
- (void).cxx_destruct;

@end
