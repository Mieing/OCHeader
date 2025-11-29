@class IESLiveLimitCommentEmojiPannelView;

@interface IESLiveLimitCommentPageEmojiCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveLimitCommentEmojiPannelView *emojiPannelView;
@property (copy, nonatomic) id /* block */ limitCommentPageEmojiCellClickCallBack;

- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
