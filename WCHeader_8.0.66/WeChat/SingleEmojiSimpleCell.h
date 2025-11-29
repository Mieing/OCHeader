@class EmojiInfoObj, MMWebImageView;

@interface SingleEmojiSimpleCell : UICollectionViewCell

@property (retain, nonatomic) EmojiInfoObj *emojiInfo;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)updateWithEmojiInfo:(id)a0;
- (void)initEmoticonView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
