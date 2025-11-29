@class WCTDatabase, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWELocalUserDatabaseManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) WCTDatabase *database;
@property (nonatomic) long long userType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setToDiskCacheSerialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)prepareDatabase;
- (BOOL)createTableWithError:(id *)a0;
- (BOOL)isCorrupted:(id)a0;
- (void)clearAllUsers;
- (id)getAllUsers;
- (void)monitorWithErrorCode:(long long)a0 extra:(id)a1;
- (void)updateUsers:(id)a0;
- (void)deleteUsersWithUserIDs:(id)a0;
- (BOOL)isTableExist;
- (void)updateUsers:(id)a0 errorCode:(long long)a1;
- (void)monitorWithErrorCode:(long long)a0;
- (void)updateUser:(id)a0 errorCode:(long long)a1;
- (void)deleteUsersWithUserIDs:(id)a0 errorCode:(long long)a1;
- (void)clearAllUsersWithErrorCode:(long long)a0;
- (id)getUserWithUid:(id)a0;
- (void)updateFollowStatusWithUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)dbFilePath;
- (id)initWithType:(long long)a0;
- (void)dealloc;
- (id)tableName;
- (void)updateUser:(id)a0;

@end
