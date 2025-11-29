@class NSString, NSData, NSMutableSet, NSMutableArray;
@protocol WCFinderMembershipFansListViewModelDelegate;

@interface WCFinderMembershipFansListViewModel : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *fansArray;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (weak, nonatomic) id<WCFinderMembershipFansListViewModelDelegate> delegate;

- (id)initWithFinderUsername:(id)a0;
- (void)fetchLocalData;
- (void)fetchMoreData;
- (void).cxx_destruct;

@end
