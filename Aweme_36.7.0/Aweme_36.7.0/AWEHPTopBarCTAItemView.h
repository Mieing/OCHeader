@class NSString, DUXBadge, UIView;

@interface AWEHPTopBarCTAItemView : UIView <AWEHPTopBarCTABadgeProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) DUXBadge *redDot;
@property (retain, nonatomic) DUXBadge *numericalRedDot;
@property (nonatomic) unsigned long long dotSceneStyle;
@property (nonatomic) double rightPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)hideRedDot;
- (unsigned long long)getBadgeSceneStyleWithFCSceneStyle:(unsigned long long)a0;
- (void)addItem:(id)a0 withConfig:(id)a1;
- (void)updateItem:(id)a0 withConfig:(id)a1;
- (void)updateRedDotSceneStyle:(unsigned long long)a0;
- (void)showRedDotWithCount:(long long)a0;
- (unsigned long long)currentRedDotType;
- (long long)currentRedDotCount;
- (void)showRedDot;
- (void)hideCountRedDot;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
