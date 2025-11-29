@class UIImageView, UILabel;

@interface AWEFeedQuickFlashListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) BOOL showItemFlashTag;
@property (nonatomic) BOOL showItemAvatarTag;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)configTagLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
