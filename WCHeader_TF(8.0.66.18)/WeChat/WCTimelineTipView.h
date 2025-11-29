@class NSString;
@protocol WCTimelineTipViewDelegate;

@interface WCTimelineTipView : MMUIView <CAAnimationDelegate> {
    BOOL _closeTipNow;
    BOOL _hidingTip;
}

@property (weak, nonatomic) id<WCTimelineTipViewDelegate> delegate;
@property (nonatomic) BOOL showTipNow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showTipWithDelegate:(id)a0 parentView:(id)a1 content:(id)a2;

- (id)init;
- (void)initView;
- (void)performBgAction;
- (id)getAnimationLayer;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)hideTipView:(BOOL)a0;
- (void)showTipView:(BOOL)a0;
- (void)closeTipView:(BOOL)a0;
- (void)showTipView:(double)a0 withAnimationTimes:(id)a1 AnimationValues:(id)a2;
- (void).cxx_destruct;

@end
