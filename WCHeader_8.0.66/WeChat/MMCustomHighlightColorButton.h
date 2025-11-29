@class UIView;

@interface MMCustomHighlightColorButton : UIButton

@property (retain, nonatomic) UIView *curMaskView;

- (void)setHighlightMaskViewColor:(id)a0 cornerRadius:(double)a1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
