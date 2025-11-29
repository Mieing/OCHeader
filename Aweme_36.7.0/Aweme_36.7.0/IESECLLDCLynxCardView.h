@class IESECGoodsDetailLynxCardElement, NSString, UIView;
@protocol IESHYContainerProtocol, IESHYHybridViewLifecycleProtocol;

@interface IESECLLDCLynxCardView : UIView

@property (nonatomic) double fontScale;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *container;
@property (retain, nonatomic) IESECGoodsDetailLynxCardElement *element;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> delegate;
@property (copy, nonatomic) NSString *identifier;

- (void)updateFontScale:(double)a0;
- (void)refreshLargeFontStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 element:(id)a1 delegate:(id)a2 identifier:(id)a3 loadDelay:(BOOL)a4;
- (void)reloadWithElement:(id)a0;
- (void)load;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
