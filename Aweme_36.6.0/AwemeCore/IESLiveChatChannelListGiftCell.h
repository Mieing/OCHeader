@class UIImageView, UITextView;

@interface IESLiveChatChannelListGiftCell : IESLiveChatChannelBaseCell

@property (retain, nonatomic) UITextView *contentTextView;
@property (retain, nonatomic) UIImageView *avatarView;

- (void)refreshWith:(id)a0;
- (void)avatarLongPress:(id)a0;
- (void)avatarSingleTap:(id)a0;
- (void)longPress:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityElements;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)loadView;
- (void)singleTap:(id)a0;

@end
