@class NSString, NSArray, AWEECOMIMNetworkImp, NSNumber;

@interface AWEECOMIMTopNotifyDataSource : NSObject

@property (retain, nonatomic) NSString *scene;
@property (copy, nonatomic) NSArray *allMessageList;
@property (weak, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (copy) NSArray *cardModelList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *groupId;

- (id)initWithGroupId:(id)a0 networkImp:(id)a1 useCache:(BOOL)a2;
- (id)initWithGroupId:(id)a0 networkImp:(id)a1;
- (void)fetchChatListTopNotifyDataSourceWithCompletion:(id /* block */)a0;
- (id)cacheKeyWithKey:(id)a0;
- (BOOL)shouldUseCache;
- (void).cxx_destruct;

@end
