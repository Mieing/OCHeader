@interface AppWeChatIntroductionMessageViewModel : BaseMessageViewModel

@property (readonly, nonatomic) double messageNodeWidth;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isDisableEditMode;
- (double)messageNodeItemHeight:(unsigned int)a0;
- (void)handleClickIntroduction:(id)a0;

@end
