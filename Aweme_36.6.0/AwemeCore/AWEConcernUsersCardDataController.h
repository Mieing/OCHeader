@class NSMutableArray, NSObject;
@protocol AWEUserRecommendDataControllerProtocol;

@interface AWEConcernUsersCardDataController : NSObject

@property (retain, nonatomic) NSMutableArray *userQueue;
@property (retain, nonatomic) NSObject<AWEUserRecommendDataControllerProtocol> *recommendPersonDataController;
@property (nonatomic) BOOL initialFetchedRecommendPerson;

- (void)fillCacheQueueFor:(long long)a0 usersWithCompletionBlock:(id /* block */)a1;
- (void)fetchNext:(long long)a0 usersFromOffset:(long long)a1 withCompletionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
