@class NSString, NSArray, NSCache;
@protocol IESLiveGeckoService;

@interface IESLiveCloudResourceServiceImpl : NSObject <IESLiveCloudResourceService>

@property (readonly, copy, nonatomic) NSString *targetName;
@property (readonly, copy, nonatomic) NSString *scaleType;
@property (readonly, copy, nonatomic) NSString *resourceVersion;
@property (readonly, copy, nonatomic) NSString *resourceSecretKey;
@property (readonly, nonatomic) NSString *imageChannel;
@property (readonly, nonatomic) NSString *imageChannelPriorityHigh;
@property (readonly, nonatomic) NSString *webpChannel;
@property (readonly, nonatomic) NSString *webpChannelPriorityHigh;
@property (readonly, nonatomic) NSString *interactConfigLayoutChannel;
@property (readonly, nonatomic) NSArray *channels;
@property (readonly, nonatomic) NSCache *imageCache;
@property (readonly, nonatomic) NSCache *dataCache;
@property (readonly, nonatomic) NSCache *filePathCache;
@property (readonly, nonatomic) NSArray *pngChannelRootPath;
@property (readonly, nonatomic) NSArray *webpChannelRootPath;
@property (retain, nonatomic) id<IESLiveGeckoService> geckoService;
@property (nonatomic) BOOL delaySyncResource;
@property (nonatomic) BOOL callGeckoApiOnlyOnce;
@property (nonatomic) BOOL onEnterRoomSync;
@property (nonatomic) BOOL enableSchedule;
@property (nonatomic) BOOL requestedPriorityHigh;
@property (nonatomic) BOOL requestedPriorityNormal;
@property (nonatomic) BOOL filePathCacheOptimize;
@property (nonatomic) BOOL disableCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupResourceAppID;
- (void)setupSetting;
- (void)setupResourceChannel;
- (BOOL)hasExistLatestResource;
- (void)asyncResource:(BOOL)a0;
- (void)syncResource:(BOOL)a0;
- (void)enterRoomUpdateResources;
- (id)getDataFromCloud:(id)a0;
- (id)getCloudData:(id)a0 channel:(id)a1;
- (id)getImageFromCloud:(id)a0;
- (id)getFilePathFromCloud:(id)a0 folder:(id)a1;
- (void)trackGeckoChannelsSize;
- (BOOL)checkChannel:(id)a0;
- (BOOL)cleanWithFileName:(id)a0 channels:(id)a1;
- (void)appendConfig:(id)a0;
- (void)didEnterAudienceRoom;
- (void)requestPriorityHighResources:(BOOL)a0 async:(BOOL)a1;
- (void)requestPriorityNormalResources:(BOOL)a0 async:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
