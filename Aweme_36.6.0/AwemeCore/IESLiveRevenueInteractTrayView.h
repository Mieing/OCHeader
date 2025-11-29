@class NSString, UIImageView, UILabel, UIView, IESLiveRevenueInteractTrayNode;

@interface IESLiveRevenueInteractTrayView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) IESLiveRevenueInteractTrayNode *node;
@property (retain, nonatomic) UIImageView *giftIcon;
@property (retain, nonatomic) UILabel *comboLabel;
@property (retain, nonatomic) UILabel *comboXLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithNode:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithNode:(id)a0;
- (void)animateWithCompletion:(id /* block */)a0;
- (id)createAnimation;
- (void)setupViews;

@end
