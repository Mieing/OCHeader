@class UIButton;
@protocol IESIMMarkViewButtonProtocol;

@interface AWEIMPOIAnchorView : AWEIMHighlightControl

@property (retain, nonatomic) UIButton<IESIMMarkViewButtonProtocol> *POIAnchorView;
@property (copy, nonatomic) id /* block */ didTapAction;

- (void)p_feedAnchorViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
