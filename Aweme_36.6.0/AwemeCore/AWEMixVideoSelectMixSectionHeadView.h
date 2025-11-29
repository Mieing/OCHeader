@class UIButton, UIColor, UIView;

@interface AWEMixVideoSelectMixSectionHeadView : UIView

@property (retain, nonatomic) UIButton *selectMixButton;
@property (retain, nonatomic) UIButton *moreMixButton;
@property (retain, nonatomic) UIView *seperateView;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) UIView *selectMixSelectedYellowView;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *unselectedColor;
@property (nonatomic) BOOL actionEnabled;
@property (copy, nonatomic) id /* block */ selectMixButtonAction;
@property (copy, nonatomic) id /* block */ moreMixButtonAction;

- (void)setLightMode;
- (void)configViewConstant;
- (void)setPanelMode;
- (void)updateButtonWithActionType:(unsigned long long)a0 animated:(BOOL)a1;
- (void)selectMixButtonClick;
- (void)moreMixButtonClick;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
