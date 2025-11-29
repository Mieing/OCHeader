@class UIView;

@interface IESECLLWrapperView : IESECLLPassthroughView <IESECLLComponent> {
    id /* block */ _uiUpdater;
}

@property (retain, nonatomic) UIView *wrappedView;

- (void)updateUIWithModel:(id)a0;
- (id)initWithView:(id)a0 uiUpdater:(id /* block */)a1;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
