@class NSString, IESLivePSComponentConfigModel, UIView;

@interface IESLivePublicScreenAnonymousView : UIView

@property (weak, nonatomic) UIView *rawView;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) long long targetContainer;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;

- (void)bindView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
