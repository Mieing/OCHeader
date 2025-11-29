@class UIImageView, UILabel, UIView;

@interface AWEIMChatThemeListCell : UICollectionViewCell

@property (retain, nonatomic) UIView *imageViewContainer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageViewBackground;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UILabel *themeTitle;
@property (retain, nonatomic) UIImageView *lockedView;

- (void)configWithModel:(id)a0;
- (void)setCellSelected:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
