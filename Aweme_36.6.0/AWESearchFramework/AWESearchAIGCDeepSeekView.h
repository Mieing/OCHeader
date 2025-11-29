@class UIImageView, UILabel, UIView;

@interface AWESearchAIGCDeepSeekView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *alertLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *bottomView;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)closeClick;
- (void)updateDeepSeekSubViews;
- (id)deepseekViewDefaultAlertText;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;

@end
