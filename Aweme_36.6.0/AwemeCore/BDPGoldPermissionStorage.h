@interface BDPGoldPermissionStorage : NSObject

+ (BOOL)isGoldPyAgreePersistentlyWithUniqueID:(id)a0;
+ (BOOL)hasPermissionStorageWithUniqueID:(id)a0;
+ (void)initGoldPyAgreePersistentlyStatusWithUniqueID:(id)a0;
+ (void)setGoldPyAgreePersistentlyStatus:(BOOL)a0 uniqueID:(id)a1;

- (id)getKeyWithUniqueID:(id)a0;
- (BOOL)isGoldPyAgreePersistentlyWithUniqueID:(id)a0;
- (BOOL)hasPermissionStorageWithUniqueID:(id)a0;
- (void)initGoldPyAgreePersistentlyStatusWithUniqueID:(id)a0;
- (void)setGoldPyAgreePersistentlyStatus:(BOOL)a0 uniqueID:(id)a1;

@end
