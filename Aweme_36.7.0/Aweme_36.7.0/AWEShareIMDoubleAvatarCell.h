@class YYLabel, NSString, AWEShareDoubleAvatarView, NSDictionary, UIImageView, UILabel, BDImageView;

@interface AWEShareIMDoubleAvatarCell : UICollectionViewCell <AWEShareCell>

@property (retain, nonatomic) AWEShareDoubleAvatarView *avatarView;
@property (retain, nonatomic) NSDictionary *displayConfig;
@property (nonatomic) BOOL enableDisplayConfig;
@property (nonatomic) BOOL hasSetAvatarSize;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *smallImageView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *selectContainer;
@property (retain, nonatomic) BDImageView *bottomCenterImageView;
@property (retain, nonatomic) YYLabel *descLabel;
@property (nonatomic) BOOL scalesImageWhenHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setAccessibilityText;
- (void)setHighlighted:(BOOL)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;

@end
