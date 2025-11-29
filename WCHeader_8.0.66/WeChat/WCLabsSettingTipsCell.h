@class MMUILabel, UIView;

@interface WCLabsSettingTipsCell : UIView {
    MMUILabel *_tipsLabel;
    UIView *_leftLineView;
    UIView *_rightLineView;
    double _offsetY;
}

+ (double)heightForOffsetY:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configureWithText:(id)a0 withOffsetY:(double)a1;
- (void)initLineView;
- (void)initTipsLabel;
- (void).cxx_destruct;

@end
