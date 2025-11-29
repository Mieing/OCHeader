@class UILabel, UIButton, PersonalDesigner;
@protocol EmoticonLensDesignerViewDelegate;

@interface EmoticonLensDesignerView : MMUIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *designerNameLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) PersonalDesigner *designer;
@property (weak, nonatomic) id<EmoticonLensDesignerViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDesignerInfo:(id)a0;
- (void)layoutSubviews;
- (void)onButtonClick;
- (void).cxx_destruct;

@end
