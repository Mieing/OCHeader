@interface IvyKit.IvyNavigationBar : UIView <BDXNavigationBarProtocol> {
    void /* unknown type, empty encoding */ backButton;
    void /* unknown type, empty encoding */ titleLabel;
    void /* function */ onLeftButtonClick;
    void /* function */ onRightButtonClick;
}

@property (nonatomic, weak) void /* function */ container;
@property (nonatomic, copy) id /* block */ onLeftButtonClick;
@property (nonatomic, copy) id /* block */ onRightButtonClick;

- (void)handleBackButtonWithSender:(id)a0;
- (void)updateTitleColor:(id)a0;
- (void)attachToContainerWithParams:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)updateTitle:(id)a0;

@end
