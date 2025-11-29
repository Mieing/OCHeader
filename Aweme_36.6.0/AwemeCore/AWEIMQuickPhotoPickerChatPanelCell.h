@class UIImageView, UILabel, UIView;

@interface AWEIMQuickPhotoPickerChatPanelCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *highlightMaskView;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)p_setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBadgeHidden:(BOOL)a0;

@end
