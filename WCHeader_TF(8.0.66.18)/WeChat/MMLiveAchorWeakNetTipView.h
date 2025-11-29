@class MMUILabel, MMUIImageView, MMUIButton;

@interface MMLiveAchorWeakNetTipView : UIView {
    MMUIImageView *_nextImageView;
    id /* block */ _actionClickBlock;
}

@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) MMUIImageView *errImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (readonly, nonatomic) MMUIImageView *nextImageView;
@property (nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)a0;
- (void)updateContentWithType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)actionButtonClick;
- (void)setActionClickBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
