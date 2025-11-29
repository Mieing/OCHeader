@class NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AWEStickerCategoryPagingLoaderDataSource, AWEStickerCategoryPagingLoaderDelegate;

@interface AWEStickerCategoryPagingLoader : NSObject <ACCStickerListLoadCapability>

@property (retain, nonatomic) NSArray *totalList;
@property (retain, nonatomic) NSArray *lastList;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long fetchCount;
@property (weak, nonatomic) id<AWEStickerCategoryPagingLoaderDataSource> dataSource;
@property (weak, nonatomic) id<AWEStickerCategoryPagingLoaderDelegate> delegate;
@property (nonatomic) long long pageCount;
@property (nonatomic) long long cursor;
@property (nonatomic) long long sortingPosition;
@property (nonatomic) unsigned long long loadState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)initWithPageCount:(long long)a0 maxCount:(long long)a1;
- (void)p_invokeCompletionsWithState:(unsigned long long)a0 error:(id)a1;
- (void)p_filterIfNeeded:(id)a0 remainCount:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)hasMore;

@end
