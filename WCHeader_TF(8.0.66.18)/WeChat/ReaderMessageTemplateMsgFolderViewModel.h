@class BaseMessageViewModel;

@interface ReaderMessageTemplateMsgFolderViewModel : BaseMessageViewModel

@property (retain, nonatomic) BaseMessageViewModel *viewModel;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)messageFolder;
- (double)calcuateWidth;
- (double)calcuateHeight;
- (double)collapsedHeight;
- (double)expandedHeight;
- (double)expandedVertialSpacing;
- (double)collapsedVertialSpacing;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)resetLayoutCache;
- (void).cxx_destruct;

@end
