@class AWEDeliveryTextSelectable, YYLabel, NSString, AWEDeliveryTextComponentModel, UITableView;

@interface AWEDeliveryTextComponent : UIView <AWEDeliveryTextSelectableDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEDeliveryTextSelectable *selectable;
@property (retain, nonatomic) AWEDeliveryTextComponentModel *model;
@property (weak, nonatomic) UITableView *cellSuperView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textContainInset;
@property (copy, nonatomic) NSString *textComponentIdentifier;
@property (copy, nonatomic) id /* block */ popMenuItems;
@property (copy, nonatomic) id /* block */ onClickPopMenu;
@property (copy, nonatomic) id /* block */ onReportClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)linkTapActionWithJumpURL:(id)a0;
- (void)pushTempViewController;
- (void)didEndTextSelectWithStartLocation:(struct CGPoint { double x0; double x1; })a0 lowLocation:(struct CGPoint { double x0; double x1; })a1 locationInView:(id)a2 tryStartLocationFirst:(BOOL)a3;
- (void)didResetTextSelectWithHitPoint:(struct CGPoint { double x0; double x1; })a0 pointInView:(id)a1;
- (void)didStartDraggingGrabber;
- (void)reloadComponentWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onLongPress:(id)a0;
- (void)copyText;

@end
