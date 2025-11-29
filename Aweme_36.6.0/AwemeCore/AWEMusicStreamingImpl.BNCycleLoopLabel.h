@class UIFont, NSString, UIColor, NSAttributedString;

@interface AWEMusicStreamingImpl.BNCycleLoopLabel : UIView {
    void /* unknown type, empty encoding */ isLoopable;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ mainLabel;
    void /* unknown type, empty encoding */ cycleLabel;
    void /* unknown type, empty encoding */ lastTime;
    void /* unknown type, empty encoding */ labelWidth;
    void /* unknown type, empty encoding */ isLooping;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ _isSuspendLoop;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverView;
}

@property (nonatomic) BOOL enableGradient;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSAttributedString *attributeText;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) double space;
@property (nonatomic) double gradientLeft;
@property (nonatomic) double gradientRight;
@property (nonatomic) BOOL isSuspendLoop;
@property (nonatomic) double speed;

- (void)startLoop;
- (void)pauseLoop;
- (void)stopLoop;
- (void)clearLoop;
- (void)resetLoop;
- (void)onDisplayLink;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
