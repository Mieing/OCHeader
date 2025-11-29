@class NSString, UIView;

@interface RTVInteractionTipsShowingRequest : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL needCustomView;
@property (readonly, nonatomic) UIView *customView;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } fromAnchor;
@property (readonly, nonatomic) UIView *forView;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } anchorAdjustment;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) unsigned long long bgStyle;
@property (readonly, nonatomic) BOOL autoDismiss;
@property (readonly, nonatomic) double showDuration;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) unsigned long long priority;

- (id)initWithIdentifier:(id)a0 content:(id)a1 forView:(id)a2 inContainerView:(id)a3 anchorAdjustment:(struct CGPoint { double x0; double x1; })a4 inDirection:(unsigned long long)a5 bgStyle:(unsigned long long)a6 completion:(id /* block */)a7;
- (id)initWithIdentifier:(id)a0 customView:(id)a1 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 forView:(id)a3 inContainerView:(id)a4 fromAnchor:(struct CGPoint { double x0; double x1; })a5 inDirection:(unsigned long long)a6 anchorAdjustment:(struct CGPoint { double x0; double x1; })a7 bgStyle:(unsigned long long)a8 completion:(id /* block */)a9;
- (void)updateShowDuration:(double)a0;
- (void).cxx_destruct;
- (void)updatePriority:(unsigned long long)a0;

@end
