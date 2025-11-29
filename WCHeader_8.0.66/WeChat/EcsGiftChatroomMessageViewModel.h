@interface EcsGiftChatroomMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) unsigned long long bubbleType;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldHideBubbleDescLabel;
- (id)iconName;
- (id)sourceCoverUrl;
- (id)wishText;
- (id)titleText;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceTag;
- (id)descText;
- (id)descTextColor;
- (id)giftStatusWording;
- (long long)giftStatus;
- (void)updateBgBubbleType:(unsigned long long)a0;
- (BOOL)showGiftCover;
- (id)ellipsisStringWithIndex:(id)a0 index:(long long)a1 labelWidth:(double)a2 font:(id)a3;
- (id)replaceNicknameInTemplate:(id)a0 userName:(id)a1 chatName:(id)a2;

@end
