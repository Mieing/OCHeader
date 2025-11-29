@class UIView;
@protocol IESGCPCGLayerItemViewProtocol;

@interface IESGCPCGGameLayerContainerView : IESGCPCGBaseLayerView

@property (weak, nonatomic) UIView<IESGCPCGLayerItemViewProtocol> *gameLayerView;

- (void)showItemView:(id)a0;
- (void)showGameLayer:(id)a0;
- (void).cxx_destruct;

@end
