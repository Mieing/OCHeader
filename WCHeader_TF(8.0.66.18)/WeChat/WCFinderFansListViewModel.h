@class NSData, NSMutableArray, WCFinderContact;
@protocol WCFinderFansListViewModelDelegate;

@interface WCFinderFansListViewModel : NSObject

@property (nonatomic) BOOL hasMoreFans;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) unsigned long long lastMaxFansId;
@property (retain, nonatomic) NSData *lastBuf;
@property (retain, nonatomic) NSMutableArray *contactArray;
@property (retain, nonatomic) NSMutableArray *addContactArray;
@property (retain, nonatomic) WCFinderContact *ownerContact;
@property (weak, nonatomic) id<WCFinderFansListViewModelDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldShowOldFansTips;
@property (readonly, nonatomic) long long fansCount;

- (id)initWithContact:(id)a0;
- (void)fetchMoreData;
- (void)fetchLocalData;
- (id)getContactArrayWithSection:(long long)a0;
- (void)addToBlackList:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)removeFans:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void).cxx_destruct;

@end
