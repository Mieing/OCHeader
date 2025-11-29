@class AWEIMEmojiAuthor, UIImageView, UILabel, UIButton;

@interface AWEIMEmojiMutableAuthorListViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *checkButton;
@property (retain, nonatomic) AWEIMEmojiAuthor *authorModel;

- (void)onButtonClicked:(id)a0;
- (void)renderModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
