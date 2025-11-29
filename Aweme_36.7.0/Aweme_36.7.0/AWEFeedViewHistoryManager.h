@class NSString, NSMutableArray;

@interface AWEFeedViewHistoryManager : NSObject <AWEFeedViewHistoryManagerProtocol>

@property (retain, nonatomic) NSMutableArray *cachedItemIDs;
@property (retain, nonatomic) NSMutableArray *cachedInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)getHistoryItemIDInfos;
- (id)getHistoryAuthorIDInfos;
- (id)arrayToJsonString:(id)a0;
- (void)addHistory:(id)a0 index:(long long)a1;
- (long long)capacity;
- (void).cxx_destruct;

@end
