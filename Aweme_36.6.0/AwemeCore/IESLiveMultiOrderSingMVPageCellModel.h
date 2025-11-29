@class NSString, IESLiveUGCVideoListDiffableModel;

@interface IESLiveMultiOrderSingMVPageCellModel : NSObject

@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) IESLiveUGCVideoListDiffableModel *diffableModel;
@property (copy, nonatomic) id /* block */ loadMoreBlock;
@property (copy, nonatomic) id /* block */ dataChangeAction;

+ (id)convertUGCVideoCellModelWithMVList:(id)a0;

- (id)sectionControllerModelObjectArray;
- (id)initWithTabID:(id)a0;
- (void)appendWithArray:(id)a0 hasMore:(BOOL)a1;
- (void).cxx_destruct;

@end
