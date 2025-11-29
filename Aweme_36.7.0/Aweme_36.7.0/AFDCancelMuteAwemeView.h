@class NSString, NSTimer, UIImageView, UILabel, UIView;

@interface AFDCancelMuteAwemeView : UIButton <CAAnimationDelegate, AFDMuteAwemeCancelViewProtocol>

@property (copy, nonatomic) id /* block */ performExpandAnimationBlock;
@property (copy, nonatomic) id /* block */ performShortenAnimationBlock;
@property (copy, nonatomic) id /* block */ performQuickShortenAnimationBlock;
@property (retain, nonatomic) NSTimer *autoShortenTimer;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL isExpended;
@property (nonatomic) double cancelViewExpendW;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ shortenAnimationStartBlock;

- (void)startAutoHideIfNeeded;
- (void)p_setupAnimation;
- (double)p_currentItemSize;
- (BOOL)isDisplayOnScreen;
- (void)updateAccessibilityFrame;
- (void)shortenWithHidden:(BOOL)a0;
- (void)expend;
- (void)accessibilityElementAutomaticFocus;
- (void)animationDidStart:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)reset;
- (void)layoutSubviews;
- (void)setup;

@end
