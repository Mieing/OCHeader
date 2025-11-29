@class UIButton, AFECloseBtn;

@interface AFECircularSuitableView : AFECircularView {
    unsigned long long _screenWidthSize;
}

@property (retain, nonatomic) AFECloseBtn *closeBtn;
@property (retain, nonatomic) UIButton *playBtn;

- (void)setSize;
- (void)onButtonCancel;
- (void)addView;
- (void)setPlayBtnIcon:(id)a0;
- (void)heiddenCloseBtn;
- (void)setScreenRotation:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateView;
- (void)layoutSubviews;
- (void)play:(id)a0;

@end
