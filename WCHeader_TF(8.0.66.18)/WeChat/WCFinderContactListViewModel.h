@class NSData, NSMutableArray, NSString;
@protocol WCFinderContactListViewModelDelegate;

@interface WCFinderContactListViewModel : NSObject <WCFinderContactExt>

@property (retain, nonatomic) NSMutableArray *contactArray;
@property (nonatomic) BOOL hasMoreContact;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL isFetchingData;
@property (weak, nonatomic) id<WCFinderContactListViewModelDelegate> delegate;
@property (nonatomic) unsigned long long followCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getContactArray;
- (void)fetchLocalContactList;
- (void)fetchMoreData;
- (void)unfollowContact:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)unfollowFinderContact:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)unfollowBrandContact:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)onFinderContactFollowListHasChange:(id)a0;
- (void)insertContact:(id)a0;
- (void)removeContact:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;

@end
