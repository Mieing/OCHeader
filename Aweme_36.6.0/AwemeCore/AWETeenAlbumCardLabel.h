@class UIImageView, UILabel;

@interface AWETeenAlbumCardLabel : UIView

@property (nonatomic) BOOL labelType;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)configWithModel:(id)a0;
- (void)p_setupView;
- (id)p_labelText;
- (struct CGSize { double x0; double x1; })p_labelSize;
- (BOOL)p_hasIcon;
- (void).cxx_destruct;
- (id)init;

@end
