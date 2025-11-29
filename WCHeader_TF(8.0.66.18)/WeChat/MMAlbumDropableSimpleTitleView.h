@class NSString, UIImageView, MMUIButton, MMUILabel;
@protocol MMAlbumDropableTitleViewDelegate;

@interface MMAlbumDropableSimpleTitleView : MMTitleView <MMDropableTitleViewAbility>

@property (retain, nonatomic) MMUIButton *button;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) id<MMAlbumDropableTitleViewDelegate> titleViewDelegate;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTitle:(id)a0;
- (void)initViews;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)setIsEnable:(BOOL)a0;
- (void)rotateArrowWithAnimated:(BOOL)a0;
- (void)laytoutTitleViews;
- (void)onClick:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
