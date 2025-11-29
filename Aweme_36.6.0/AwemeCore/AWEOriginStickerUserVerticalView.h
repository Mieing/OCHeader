@class UIImageView, UILabel;

@interface AWEOriginStickerUserVerticalView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *createdByLabel;
@property (retain, nonatomic) UILabel *creatorNameLabel;

- (void)updateWithUserModel:(id)a0;
- (void)layoutStickerUserView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
