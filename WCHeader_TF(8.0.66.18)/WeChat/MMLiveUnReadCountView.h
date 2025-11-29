@class UILabel, UIImageView;

@interface MMLiveUnReadCountView : UIView

@property (retain, nonatomic) UILabel *unReadCountLabel;
@property (retain, nonatomic) UIImageView *unReadIconView;
@property (nonatomic) long long contentType;
@property (nonatomic) unsigned long long unReadCount;
@property (copy, nonatomic) id /* block */ transferHitTestBlock;

+ (id)createUnReadCountStr:(unsigned long long)a0;

- (id)initWithLabel:(id)a0 icon:(id)a1 backgroundColor:(id)a2;
- (void)layoutSubviews;
- (void)setText:(id)a0;
- (void)refreshUI;
- (void)rotateIcon:(double)a0;
- (id)accessibilityLabel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
