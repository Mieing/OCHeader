@class UIColor, NSString, UIImageView, UIView;

@interface AWEIMEmoticonTabCollectionViewCell : UICollectionViewCell <AWEIMEmoticonTabCollectionViewCell>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *redDot;
@property (nonatomic) BOOL userSelected;
@property (nonatomic) BOOL needRedDotGuide;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__refreshSelectedUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
