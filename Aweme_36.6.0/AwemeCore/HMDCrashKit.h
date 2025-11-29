@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, HMDCrashUploader, HMDCrashKitDelegate;

@interface HMDCrashKit : NSObject <HMDCustomFilterCallback>

@property (retain, nonatomic) NSDictionary *extraMetaData;
@property (retain, nonatomic) id<HMDCrashUploader> uploader;
@property (copy, nonatomic) NSString *commitID;
@property (copy, nonatomic) NSString *buildJobID;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) BOOL needEncrypt;
@property (nonatomic) double launchCrashThreshold;
@property (nonatomic) BOOL lastTimeCrash;
@property (weak, nonatomic) id networkProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dynamicDataQueue;
@property (nonatomic) unsigned long long lastCrashUsedVM;
@property (nonatomic) unsigned long long lastCrashTotalVM;
@property (weak, nonatomic) id<HMDCrashKitDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setExtraMetaData:(id)a0;
+ (id)extraMetaData;
+ (id)sharedInstance;

- (void)setCustomValue:(id)a0 key:(id)a1;
- (void)removeCustomValue:(id)a0;
- (void)setFilterValue:(id)a0 key:(id)a1;
- (void)removeFilterValue:(id)a0;
- (void)requestCrashUpload:(BOOL)a0;
- (void)setDynamicValue:(id)a0 key:(id)a1;
- (void)syncDynamicValue:(id)a0 key:(id)a1;
- (void)removeDynamicValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
