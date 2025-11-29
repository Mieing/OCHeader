@class AWERewardedAdvertisingEventButton, NSArray, UIStackView, NSString, MASConstraint;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEEntertainmentMultipleEventsView : UIView <AWEEntertainmentMultipleEventsViewProtocol, AWEPlayInteractionBottomButtonViewProtocol>

@property (copy, nonatomic) NSArray *configs;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) AWERewardedAdvertisingEventButton *leftButton;
@property (weak, nonatomic) AWERewardedAdvertisingEventButton *rightButton;
@property (retain, nonatomic) MASConstraint *rightButtonWidthConstraint;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupConfigs;
- (void)updateEventText:(id)a0 forIndex:(long long)a1;
- (void)updateEventStyle:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateEventText:(id)a0 action:(id /* block */)a1 forIndex:(long long)a2;
- (void)updateSpacing:(double)a0;
- (void)updateEventText:(id)a0 iconImage:(id)a1 action:(id /* block */)a2 forIndex:(long long)a3;
- (id)findConfigForIndex:(long long)a0;
- (void)updateButtonUIWithConfig:(id)a0;
- (void)setRightButtonHidden:(BOOL)a0;
- (unsigned long long)getEventStyle;
- (void)updateEventText:(id)a0 richText:(id)a1 forIndex:(long long)a2;
- (id)getEventTextForIndex:(long long)a0;
- (void)updateEventAction:(id /* block */)a0 forIndex:(long long)a1;
- (void)updateTextSideImage:(id)a0 forIndex:(long long)a1;
- (id)buttonViewAtIndex:(long long)a0;
- (id)buttonContainerViewAtIndex:(long long)a0;
- (long long)getEventButtonStateForIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
