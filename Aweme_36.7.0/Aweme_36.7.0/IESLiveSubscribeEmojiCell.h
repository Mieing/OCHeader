@class UIImageView, UIView;

@interface IESLiveSubscribeEmojiCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *emojiImageView;
@property (retain, nonatomic) UIImageView *emojiTipIcon;
@property (retain, nonatomic) UIImageView *lockImageView;

- (void)resetemojiTipIcon;
- (void)updateWithEmoji:(id)a0 andIsNewEmoji:(BOOL)a1;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
