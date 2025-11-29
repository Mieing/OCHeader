@interface EcsGiftMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) unsigned long long bubbleType;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })viewSize;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)tagText;
- (id)wishText;
- (id)sourceTitle;
- (id)giftStatusText;
- (long long)giftStatus;
- (void)updateBgBubbleType:(unsigned long long)a0;

@end
