@interface PIAABTestHelper : NSObject

@property (nonatomic) BOOL openSSRSnapshot;

+ (id)shareInstance;

- (id)snapshotExpire;
- (long long)snapshotExpireTimeByURL:(id)a0;

@end
