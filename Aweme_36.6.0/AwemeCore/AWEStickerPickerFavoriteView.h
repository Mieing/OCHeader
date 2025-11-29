@class CALayer, ACCCollectionButton, NSString;

@interface AWEStickerPickerFavoriteView : UIView <AWEStickerPickerFavoriteViewProtocol>

@property (retain, nonatomic) CALayer *bgLayer;
@property (retain, nonatomic) ACCCollectionButton *favoriteButton;
@property (nonatomic) BOOL isAnimated;
@property (nonatomic) BOOL enableNewUI;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNewUI:(BOOL)a0;
- (void)setBgLayerColor:(struct CGColor { } *)a0;
- (void)toggleSelected;
- (id)buttonTitleForState:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getImageEdgeInsetsForState:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getTitleEdgeInsetsForState:(BOOL)a0;
- (double)getFavoriteButtonBackgroundWidthForState:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
