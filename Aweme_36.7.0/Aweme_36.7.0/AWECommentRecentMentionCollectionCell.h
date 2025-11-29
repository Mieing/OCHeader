@class UIImageView, UILabel;

@interface AWECommentRecentMentionCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *firstAvatarImageView;
@property (retain, nonatomic) UIImageView *secondAvatarImageView;
@property (retain, nonatomic) UILabel *recentMentionLabel;

+ (struct CGSize { double x0; double x1; })itemSize;
+ (id)identifier;

- (void)configWithUserList:(id)a0;
- (void)updateTheme:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
