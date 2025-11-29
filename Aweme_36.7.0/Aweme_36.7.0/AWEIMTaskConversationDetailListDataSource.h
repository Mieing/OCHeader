@class AWEIMTaskDetailistContext, NSArray, AWEIMTaskCardListCellItem, UITableView;

@interface AWEIMTaskConversationDetailListDataSource : NSObject

@property (weak, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *snapshot;
@property (nonatomic) BOOL shouldShowNetErrorView;
@property (nonatomic) BOOL shouldShowEmptyLabel;
@property (nonatomic) BOOL isDataRefreshed;
@property (nonatomic) unsigned long long fetchState;
@property (nonatomic) BOOL isLoadMore;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (nonatomic) long long spaceType;
@property (nonatomic) BOOL isRequesting;
@property (weak, nonatomic) AWEIMTaskDetailistContext *context;
@property (retain, nonatomic) AWEIMTaskCardListCellItem *pageItem;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)fetchDataLoadMore:(BOOL)a0;
- (void)deleteConversationWithConvId:(id)a0;
- (void)refreshDataWithConversationCardModels:(id)a0;
- (void).cxx_destruct;
- (id)initWithTableView:(id)a0;

@end
