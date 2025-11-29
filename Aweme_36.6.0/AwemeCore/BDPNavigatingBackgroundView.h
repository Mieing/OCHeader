@class UIView;

@interface BDPNavigatingBackgroundView : UIView

@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) BOOL isUseShadowView;

- (id)initWithView:(id)a0 snapshot:(BOOL)a1;
- (void).cxx_destruct;

@end
