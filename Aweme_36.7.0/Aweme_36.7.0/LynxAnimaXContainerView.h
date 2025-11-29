@class UIView;
@protocol AnimaXViewProtocol, AnimaXPlayerProtocol;

@interface LynxAnimaXContainerView : UIView

@property (retain, nonatomic) UIView<AnimaXViewProtocol, AnimaXPlayerProtocol> *contentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
