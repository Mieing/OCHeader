@class UILabel, IESLiveImageLabelButton, NSString;

@interface IESLivePaidStreamLiveIMBlockView : UIView <IESLivePaidStreamBlockView>

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *subTitleLabel;
@property (weak, nonatomic) IESLiveImageLabelButton *actionButton;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)install:(unsigned long long)a0 uiConfig:(id)a1 actionHandler:(id /* block */)a2;
- (void)actionButtonAction:(id)a0;
- (void)uninstall;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
