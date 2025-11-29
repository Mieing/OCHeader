@class NSTimer, NSString;

@interface BDPOrderCommentGuideView : UIView <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long dismissType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_getButtonWithImageName:(id)a0 type:(unsigned long long)a1;
- (void)closeGuideView;
- (void)_dismissWithAnimation;
- (void)orderCommentClickWithSender:(id)a0;
- (void)showWithParentView:(id)a0 dismissBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithTitle:(id)a0 content:(id)a1;

@end
