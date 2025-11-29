@class UIStackView, NSArray, NSString, UIView, IESECSlicePopoverContentView;

@interface IESECSlicePopoverView : UIView <IESECSlicePopoverItemViewDelegate>

@property (retain, nonatomic) IESECSlicePopoverContentView *contentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeinsets;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *configs;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (retain, nonatomic) UIView *target;
@property (nonatomic) unsigned long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)coverViewDidHit;
- (void)checkOverView;
- (void)addItemConfiguration:(id)a0;
- (void)tapWillFinish;
- (void)addArrangedSubviewWithSeparator:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)updateItems;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;

@end
