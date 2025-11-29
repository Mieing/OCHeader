@class NSString, NSMutableArray;
@protocol AWEIMBatchFetchUserSessionDelegate;

@interface AWEIMBatchFetchUserSession : NSObject

@property (retain, nonatomic) NSMutableArray *users;
@property (copy, nonatomic) NSString *ownerID;
@property (copy, nonatomic) NSString *ownerSecID;
@property (nonatomic) BOOL needSaveToIMDB;
@property (weak, nonatomic) id<AWEIMBatchFetchUserSessionDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *successUserModels;
@property (retain, nonatomic) NSMutableArray *failedUserIDs;
@property (nonatomic) BOOL isOnlyUpdateOldDB;
@property (nonatomic) BOOL enableSaveToDBSwitchThread;
@property (nonatomic) BOOL saveUserAndCheckIsMeAndContactName;

- (id)initWithUsers:(id)a0 needSaveToIMDB:(BOOL)a1;
- (void)p_fetchOnePageUser:(long long)a0;
- (void)p_fetchUsers:(id)a0 completion:(id /* block */)a1;
- (void)p_finishSession;
- (void)p_asyncFetchUsers:(id)a0 completion:(id /* block */)a1;
- (void)fetchUsers:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)startSession;

@end
