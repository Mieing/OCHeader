@class NSMutableArray;

@interface ReaderMessageFolderViewModel : ReaderMessageViewModel

@property (retain, nonatomic) NSMutableArray *viewModelList;
@property (nonatomic) unsigned long long status;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)messageFolder;
- (void)addReaderViewModel:(id)a0;
- (void)addReaderViewModelList:(id)a0;
- (unsigned long long)collapsedDisplayViewCount;
- (void)updateViewPositions;
- (double)calcuateWidth;
- (double)calcuateHeight;
- (double)collapsedHeight;
- (double)expandedHeight;
- (double)expandedVertialSpacing;
- (double)collapsedVertialSpacing;
- (double)animationDuration;
- (BOOL)isExpanded;
- (BOOL)isCollapsed;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)resetLayoutCache;
- (void).cxx_destruct;

@end
