@class UIImageView, MMUILabel, UIButton;

@interface MMWebNaviErrorView : UIView

@property (retain, nonatomic) UIImageView *errIcon;
@property (retain, nonatomic) MMUILabel *errLbl;
@property (retain, nonatomic) UIButton *reloadButton;
@property (nonatomic) unsigned int reason;
@property (copy, nonatomic) id /* block */ reloadAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setText:(id)a0;
- (void)onReload;
- (void).cxx_destruct;

@end
