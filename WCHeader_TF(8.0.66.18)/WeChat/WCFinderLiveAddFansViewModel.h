@class NSMutableArray;
@protocol WCFinderLiveAddFansViewModelDelegate;

@interface WCFinderLiveAddFansViewModel : NSObject

@property (nonatomic) BOOL hasMoreFans;
@property (nonatomic) unsigned long long lastMaxFansId;
@property (retain, nonatomic) NSMutableArray *contactArray;
@property (nonatomic) unsigned long long liveID;
@property (nonatomic) long long fansCount;
@property (weak, nonatomic) id<WCFinderLiveAddFansViewModelDelegate> delegate;

- (id)initWithLiveID:(unsigned long long)a0 addFansCount:(long long)a1;
- (void)fetchMoreData;
- (void)addToBlackList:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)removeFans:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void).cxx_destruct;

@end
