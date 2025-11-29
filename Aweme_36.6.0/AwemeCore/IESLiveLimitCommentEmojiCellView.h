@class UIImageView, HTSLiveFixedChatInfo_EmojiDetail, UIView;

@interface IESLiveLimitCommentEmojiCellView : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *emojiImageView;
@property (retain, nonatomic) HTSLiveFixedChatInfo_EmojiDetail *emojiModel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
