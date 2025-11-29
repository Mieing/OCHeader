@class AWECommentLongPressPanelContext, NSArray, NSString, AWEIMCommentShareUserHorizontalCollectionViewCell;
@protocol AWEIMShareAndForwardToChatProtocol;

@interface AWEIMCommentShareUserHorizontalSectionViewModel : AWEBaseListSectionViewModel <AWEIMCommentSectionViewModelProtocol>

@property (copy, nonatomic) NSArray *itemModels;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) AWEIMCommentShareUserHorizontalCollectionViewCell *sectionCell;
@property (copy, nonatomic) id /* block */ shareItemViewBlock;
@property (copy, nonatomic) id /* block */ extraAsynchronousGesturesBlock;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWECommentLongPressPanelContext *commentPageContext;

- (double)sectionTotalHeight;
- (id)asynchronousWithGestures;
- (void)sheetWillDismiss;
- (long long)modelsDiffType;
- (void)configShareModel:(id)a0;
- (void)fetchSectionDataSource;
- (void).cxx_destruct;

@end
