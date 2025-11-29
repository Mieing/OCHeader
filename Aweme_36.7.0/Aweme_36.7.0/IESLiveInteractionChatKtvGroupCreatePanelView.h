@class UIImageView, IESLiveCustomButton, UIView;

@interface IESLiveInteractionChatKtvGroupCreatePanelView : IESLiveInteractivePanelView

@property (retain, nonatomic) UIView *firstView;
@property (retain, nonatomic) UIView *secondView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESLiveCustomButton *confirmButton;
@property (copy, nonatomic) id /* block */ didClickedConfirmAction;

- (id)buildInfoView:(id)a0 desc:(id)a1;
- (void)confirmButtonActions:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
