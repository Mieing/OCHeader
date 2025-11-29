@class AWELongPressPanelBaseViewModel, NSString, UIImageView, CAShapeLayer, UILabel, UIView;

@interface AWEModernLongPressInteractiveItemCell : UICollectionViewCell <AWENavigationItemCellProtocol>

@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) UIImageView *buttonIcon;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIImageView *markImageView;
@property (retain, nonatomic) CAShapeLayer *holeLayer;
@property (retain, nonatomic) AWELongPressPanelBaseViewModel *longPressPanelVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showMarkWithDuxIconName:(id)a0 duxColorName:(id)a1;
- (void)hideMark;
- (void)removeTransparentHoleFromButtonIcon;
- (void)addTransparentHoleToButtonIconWithRadius:(double)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)updateTitle:(id)a0;
- (void)updateUI:(id)a0;

@end
