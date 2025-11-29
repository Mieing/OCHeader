@class UIView;
@protocol AWEHPListKitItemControllerModelProtocol, AWEHPListKitCollectionViewCellDelegate;

@interface AWEHPListKitCollectionViewCell : DUXBaseCollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<AWEHPListKitCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) id<AWEHPListKitItemControllerModelProtocol> model;

- (void)setDelegate:(id)a0 withModel:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
