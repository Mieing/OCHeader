@class UILabel, UIView;
@protocol IESIMMultiAvatarViewProtocol;

@interface AWEIMMixPhotoPluralAvatarAndButtonWaterFallCell : AWEIMMixPhotoButtonWaterFallCell

@property (retain, nonatomic) UIView<IESIMMultiAvatarViewProtocol> *multiAvatar;
@property (retain, nonatomic) UILabel *progressLabel;

+ (id)identifier;

- (void)configWithItem:(id)a0;
- (id)multiAvatarOptionWithPlaceholder:(id)a0 moreAvatarCount:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
