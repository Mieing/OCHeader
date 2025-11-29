@class BDPMMKVStorage, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface BDPUnisusABTestManager : NSObject <UnisusAbTestServiceProtocol, BDPUnisusBasePluginDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BDPMMKVStorage *_storage;
    NSMutableSet *_exposedVids;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)bdp_exposureVidString;
- (void)createFolderIfNeed:(id)a0;
- (void)bdp_exposeABTest:(id)a0;
- (id)getExposureVidString;
- (void)saveExposureVidString:(id)a0;
- (void)removeExposureVidString;
- (void)handleVidInfo:(id)a0;
- (void)updateVidInfo:(id)a0;
- (void).cxx_destruct;
- (void)setupStorage;
- (id)init;

@end
