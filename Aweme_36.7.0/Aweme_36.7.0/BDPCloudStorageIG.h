@class BDPUniqueID;
@protocol BDPKVInterface;

@interface BDPCloudStorageIG : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) id<BDPKVInterface> storage;
@property (retain, nonatomic) id<BDPKVInterface> storageBackup;

- (id)initWithUniqueId:(id)a0;
- (long long)sidExpiredTime;
- (BOOL)isAnonymousSid;
- (void)setSid:(id)a0 sidExpiredTime:(long long)a1 isAnonymousSid:(BOOL)a2;
- (void).cxx_destruct;
- (id)sid;

@end
