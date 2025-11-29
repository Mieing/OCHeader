@class UIImageView, MMUILabel, MMUIView;

@interface WCAdModeSelectView : MMUIButton

@property (retain, nonatomic) MMUILabel *mTitleLabel;
@property (retain, nonatomic) MMUILabel *recommendLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIImageView *selectTipView;
@property (nonatomic) BOOL isRecommend;
@property (retain, nonatomic) MMUIView *titleMaskView;
@property (retain, nonatomic) MMUIView *descMaskView;
@property (retain, nonatomic) MMUIView *clickMaskView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isRecommend:(BOOL)a1;
- (void)initSubviews;
- (void)adjustUI;
- (void)showViewWithSelected:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)hideView;
- (void)updateHeight:(double)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)createMaskViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
