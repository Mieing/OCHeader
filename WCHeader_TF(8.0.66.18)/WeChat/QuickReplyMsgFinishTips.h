@class UIImageView, UILabel, UIView;

@interface QuickReplyMsgFinishTips : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipsLabel;

- (id)initWithTips:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)sizeToFitWidth:(double)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
