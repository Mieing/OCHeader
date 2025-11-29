@class UIView;
@protocol AWEDPlayerInteractionDispatchProtocol, AWEDPlayerInteractionViewProtocol;

@interface AWEDPlayerInteractionBaseElementContainer : AWEElementContainer

@property (weak, nonatomic) UIView<AWEDPlayerInteractionViewProtocol, AWEDPlayerInteractionDispatchProtocol> *container;

- (void).cxx_destruct;

@end
