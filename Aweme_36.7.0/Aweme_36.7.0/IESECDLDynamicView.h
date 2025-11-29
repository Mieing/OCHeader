@class IESECDLBuilder, IESECDLRender, UIView;

@interface IESECDLDynamicView : IESECDLView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESECDLRender *render;
@property (retain, nonatomic) IESECDLBuilder *builder;

- (void)clickAction;
- (void)p_setUpUI;
- (void)renderDataWithModel:(id)a0;
- (void)bindDLEventWithEventData:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
