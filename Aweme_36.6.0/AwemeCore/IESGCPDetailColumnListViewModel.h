@class IESGCPDetailDynamicProtocolAPI, IESGCPColumnListPageInfo;

@interface IESGCPDetailColumnListViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPDetailDynamicProtocolAPI *api;
@property (retain, nonatomic) IESGCPColumnListPageInfo *pageInfo;
@property (nonatomic) double topMargin;

- (double)getSpace;
- (BOOL)canLoadMore;
- (id)getBackgroundColor;
- (void)notifyDidLoadSecondPageContent:(BOOL)a0 error:(id)a1;
- (void)loadMoreWithComplete:(id /* block */)a0;
- (BOOL)shouldPreloadNextPage;
- (id)tabListID;
- (BOOL)isVerifyDataWithNewContent:(id)a0 originContent:(id)a1;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)init;

@end
