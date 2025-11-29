@class NSString, NSData, NSMutableSet, NSMutableArray;
@protocol WCFinderMemberShipFollowContactListViewModelDelegate;

@interface WCFinderMemberShipFollowContactListViewModel : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *followArray;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (weak, nonatomic) id<WCFinderMemberShipFollowContactListViewModelDelegate> delegate;

- (id)initWithFinderUsername:(id)a0;
- (void)fetchLocalData;
- (void)fetchFirstPageData;
- (void)fetchMoreData;
- (void)requestDataWithLastBuffer:(id)a0;
- (void).cxx_destruct;

@end
