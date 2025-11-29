@class AWEIMEmojiButton, AWECommentMiniEmoticonModel;

@interface AWEIMFansGroupFeedEmojisCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWECommentMiniEmoticonModel *model;
@property (retain, nonatomic) AWEIMEmojiButton *emojiButton;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)updateEmojiBtnBackgroundColor:(id)a0;
- (void)__handelEmojiButtonTapAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
