@class NSString, NSMutableDictionary, NSData, NSMutableArray;
@protocol WCFinderFriendsAlsoFollowViewModelDelegate;

@interface WCFinderFriendsAlsoFollowViewModel : NSObject

@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSMutableArray *dataInfos;
@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) NSData *lastBuf;
@property (nonatomic) BOOL hasMoreData;
@property (retain, nonatomic) NSMutableDictionary *pendingFollowStateMap;
@property (nonatomic) int scene;
@property (nonatomic) long long firstPageCount;
@property (weak, nonatomic) id<WCFinderFriendsAlsoFollowViewModelDelegate> delegate;
@property (nonatomic) int commentScene;

- (id)initWithUsername:(id)a0 scene:(int)a1 fromUsername:(id)a2 commentScene:(int)a3;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)refretchDataWithCompletion:(id /* block */)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0 isFirstPage:(BOOL)a1;
- (void)followContactAtIndex:(unsigned long long)a0 followAction:(unsigned long long)a1;
- (void)cleanPendingFollowState:(unsigned long long)a0 username:(id)a1;
- (id)dataAtIndex:(unsigned long long)a0;
- (long long)indexOfContact:(id)a0;
- (unsigned long long)dataCount;
- (void)onFinderContactFollowStatusUpdate:(id)a0;
- (void)onFinderContactFollowStatusUpdateFailure:(id)a0;
- (void)changeContactState:(id)a0;
- (int)feedViewControllerScene;
- (void).cxx_destruct;

@end
