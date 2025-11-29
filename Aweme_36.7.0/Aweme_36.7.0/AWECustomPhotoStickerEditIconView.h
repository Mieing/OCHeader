@class UIImageView, UILabel;

@interface AWECustomPhotoStickerEditIconView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *iconCircle;
@property (retain, nonatomic) UILabel *iconLabel;
@property (nonatomic) BOOL isChosen;

- (void)setUpIconViewWithIconImage:(id)a0 circleImage:(id)a1 labelText:(id)a2 fontWeight:(long long)a3;
- (void)changeIconImage:(id)a0;
- (void)changeAlpha;
- (void).cxx_destruct;

@end
