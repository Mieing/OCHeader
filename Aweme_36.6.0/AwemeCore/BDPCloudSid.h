@class NSObject, BDPThreadSafeDictionary, BDPCloudStorage, BDPUniqueID;
@protocol OS_dispatch_queue;

@interface BDPCloudSid : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPCloudStorage *storage;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sidQueue;
@property (retain, nonatomic) BDPThreadSafeDictionary *invokePendingQueues;

- (void)updateSidWithCompletion:(id /* block */)a0 force:(BOOL)a1;
- (void)executeAllPendingAPI;
- (void)clearAllPendingAPI;
- (BOOL)_checkSidExpired;
- (void)addPendingAPI:(id /* block */)a0;
- (void)_loginWithCompletion:(id /* block */)a0;
- (void)updateSidStatus:(unsigned long long)a0;
- (void)getSidWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
