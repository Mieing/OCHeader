@class MMUILabel, MMUIButton;
@protocol StatViewCellDelegate;

@interface StatViewCell : UIView

@property (retain, nonatomic) MMUILabel *rowCountNumber;
@property (retain, nonatomic) MMUIButton *rowTitleArrowButton;
@property (weak, nonatomic) id<StatViewCellDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initView;
- (void)updateWithTitle:(id)a0 countNumber:(id)a1 withAction:(SEL)a2;
- (void)onClickToTotalUserStats;
- (void).cxx_destruct;

@end
