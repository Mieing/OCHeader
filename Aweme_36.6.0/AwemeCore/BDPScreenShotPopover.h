@class NSString, BDPUniqueID;

@interface BDPScreenShotPopover : UIView <CAAnimationDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (retain, nonatomic) NSString *module_type;
@property (nonatomic) unsigned long long action;
@property (nonatomic) double popoverHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dismissAnimation;
- (void)showOnView:(id)a0 animated:(BOOL)a1;
- (id)buttonArray;
- (void)shareButtonClicked;
- (void)setDataWithUniqueID:(id)a0 Action:(unsigned long long)a1;
- (void)imageClicked;
- (void)recordButtonClicked;
- (id)displayAnimation;
- (void)shareEventWithChannel:(id)a0 fromImage:(BOOL)a1;
- (id)initWithUniqueID:(id)a0 action:(unsigned long long)a1;
- (void)dismissWithAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dismiss:(id /* block */)a0;
- (void)setupUI;
- (id)addButtonWithType:(unsigned long long)a0;

@end
