@class UIImageView, IESLiveEmoticonModel, UILabel;

@interface IESLiveLowPcuGuideChatEmojiView : UIView

@property (retain, nonatomic) IESLiveEmoticonModel *model;
@property (retain, nonatomic) UIImageView *emojiImageView;
@property (retain, nonatomic) UILabel *emojiLabel;

- (id)initWithEmoticonModel:(id)a0;
- (void).cxx_destruct;
- (void)setupView;

@end
