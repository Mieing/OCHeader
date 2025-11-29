@class AWEAIOriginalPageContext, AWEAIOriginalCommentStatusSectionViewModel;

@interface AWEAIOriginalCommentViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEAIOriginalCommentStatusSectionViewModel *noMoreCommentSectionVM;
@property (retain, nonatomic) AWEAIOriginalPageContext *pageContext;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void).cxx_destruct;

@end
