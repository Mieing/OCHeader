@class NSString, UIImageView, UIView, NSIndexPath;

@interface ACCSideslipPropBaseCell : UICollectionViewCell <ACCSideslipPropBaseCellProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *unavailableMaskView;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) NSString *accessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUnavailable:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
