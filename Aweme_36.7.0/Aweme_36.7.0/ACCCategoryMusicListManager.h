@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ACCCategoryMusicListManager : NSObject {
    NSObject<OS_dispatch_queue> *_executeDataQueue;
}

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *playlistId;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isCommerce;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (nonatomic) long long recordModel;
@property (nonatomic) double videoDuration;

- (void)loadMore:(id)a0 completion:(id /* block */)a1;
- (id)initWithCategoryId:(id)a0 isCommerce:(BOOL)a1;
- (id)initWithCategoryId:(id)a0 isCommerce:(BOOL)a1 playlistId:(id)a2;
- (void)p_loadWithCursor:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)initWithCategoryId:(id)a0;
- (id)initWithCategoryId:(id)a0 isCommerce:(BOOL)a1 hasMore:(BOOL)a2 cursor:(long long)a3;
- (void)refresh:(id)a0 completion:(id /* block */)a1;
- (id)getMusicListTitle;
- (void).cxx_destruct;

@end
