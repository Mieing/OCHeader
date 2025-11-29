@class AWELongPressSpeedTip, UIImageView, AWEPlayInteractionLongPressModalQuickItems, UIView, UILabel, NSString;

@interface AWELongPressModalView : UIView <CAAnimationDelegate, AWELongPressModalViewProtocol>

@property (retain, nonatomic) AWELongPressSpeedTip *tipsView;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UILabel *leftTitle;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIImageView *rightIconView;
@property (retain, nonatomic) UILabel *rightTitle;
@property (retain, nonatomic) AWEPlayInteractionLongPressModalQuickItems *leftItem;
@property (retain, nonatomic) AWEPlayInteractionLongPressModalQuickItems *rightItem;
@property (nonatomic) long long topIconType;
@property (copy, nonatomic) id /* block */ leftClickHandler;
@property (copy, nonatomic) id /* block */ rightClickHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)addViewAndTriggerHaptic:(id)a0;
- (id)slideAnimationGroup:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 fromAlpha:(double)a2 toAlpha:(double)a3;
- (void)animationOnTopView:(BOOL)a0;
- (void)animationOnLeftView:(BOOL)a0;
- (void)animationOnRightView:(BOOL)a0;
- (id)getBGColorForIconType:(long long)a0 active:(BOOL)a1;
- (void)updateLeftIcon:(BOOL)a0;
- (void)updateRightIcon:(BOOL)a0;
- (id)imageWithIconType:(long long)a0;
- (void)slideAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (void)setActionType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews;

@end
