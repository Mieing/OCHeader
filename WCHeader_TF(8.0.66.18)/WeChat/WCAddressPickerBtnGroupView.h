@class UIButton, UIScrollView, UIView;
@protocol WCAddressTableViewDelegate;

@interface WCAddressPickerBtnGroupView : UIView {
    id<WCAddressTableViewDelegate> m_delegate;
}

@property (retain, nonatomic) UIButton *selectProvinceButton;
@property (retain, nonatomic) UIButton *selectCityButton;
@property (retain, nonatomic) UIButton *selectDistrictButton;
@property (retain, nonatomic) UIButton *selectStreetButton;
@property (retain, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) UIView *separateLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)onClickButton:(id)a0;
- (id)defaultButtonTiltes;
- (void)setDelegate:(id)a0;
- (id)buttonAtIndex:(long long)a0;
- (void)layoutBtnAtIndex:(unsigned long long)a0 withStatus:(int)a1 andTitle:(id)a2;
- (void)updateContainerLayout;
- (void)updateLayoutWhenComponentAppear:(long long)a0;
- (void).cxx_destruct;

@end
