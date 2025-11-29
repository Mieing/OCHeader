@class NSArray, NSString;

@interface AWELeftSideBarRevisitUserListViewModel : NSObject <AWELeftSideBarRevisitUserListPageHandlerProtocol>

@property (copy, nonatomic) NSArray *currentUnreadUserIDList;
@property (copy, nonatomic) NSArray *modelsArray;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL hasMoreUser;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *nextCursor;
@property (nonatomic) BOOL shouldShowLatestVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)noMoreUserData;
- (void)loadMoreUnreadUserWithCompletion:(id /* block */)a0;
- (id)userModelWithUserID:(id)a0;
- (Class)emptyCellClass;
- (void)refreshCurrentUnreadUserIDList;
- (id)initWithUserList:(id)a0;
- (void)requestMoreUser:(id /* block */)a0;
- (void).cxx_destruct;

@end
