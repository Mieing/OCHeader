@class UIFont, UIColor, NSString, UILabel, UIView;

@interface IESECShopScrollTextView : UIView <IESECShopScrollTextProtocol> {
    unsigned long long _repeatCount;
    double _pauseTime;
    double _interval;
    double _speed;
    double _delay;
    BOOL _shrinkToFit;
    BOOL _needRelayout;
    BOOL _needAnimation;
    double _scrollOffset;
    id /* block */ _animationBlock;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetOffset;
- (void)redoAnimation;
- (void)startScroll:(id /* block */)a0;
- (void)updateScrollOffsetByFrameWidth;
- (void)updateScrollOffsetWithPartialWidth:(double)a0;
- (double)calculateWidthWithText:(id)a0;
- (id)initWithRepeatCount:(unsigned long long)a0 pauseTime:(double)a1 interval:(double)a2 speed:(double)a3 delay:(double)a4 shrinkToFit:(BOOL)a5;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUpView;

@end
