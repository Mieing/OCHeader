@class BDPUniqueID, BDPCloudStorageIG;

@interface BDPCloudSidIG : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPCloudStorageIG *storage;

- (void)updateSidWithCompletion:(id /* block */)a0 force:(BOOL)a1;
- (BOOL)_checkSidExpired;
- (void)_loginWithCompletion:(id /* block */)a0;
- (void)getSidWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
