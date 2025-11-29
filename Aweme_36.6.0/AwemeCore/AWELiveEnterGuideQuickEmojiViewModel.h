@class UIImage;

@interface AWELiveEnterGuideQuickEmojiViewModel : AWELiveEnterGuideQuickViewModel

@property (retain, nonatomic) UIImage *emojiImage;
@property (nonatomic) long long emojiId;
@property (copy, nonatomic) id /* block */ caculateWidthCompletion;

- (id)initWithEmojiDetail:(id)a0;
- (void)precaculateCellWidthForEmojiDetai:(id)a0;
- (void).cxx_destruct;

@end
