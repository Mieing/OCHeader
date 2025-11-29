@class UIImageView, IESLiveEmoticonModel, UIView;
@protocol IESLiveEmoticonResource;

@interface IESLiveCommentWidgetQuickEmojiCell : UICollectionViewCell

@property (nonatomic) long long imageScale;
@property (retain, nonatomic) id<IESLiveEmoticonResource> emoticonResource;
@property (retain, nonatomic) UIImageView *emojiView;
@property (retain, nonatomic) UIView *customEmojiView;
@property (retain, nonatomic) IESLiveEmoticonModel *emoticonModel;

- (void)updateWithEmoticonModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
