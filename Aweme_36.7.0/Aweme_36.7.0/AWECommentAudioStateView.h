@class UIImageView;

@interface AWECommentAudioStateView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL isBGColorWhite;

- (id)initWithStyle:(unsigned long long)a0 isBGColorWhite:(BOOL)a1;
- (void)onCommentUIThemeChange;
- (void)updateCommentAudioState:(unsigned long long)a0;
- (void)updateStartPlayImageView;
- (void)updateDefaultStateImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
