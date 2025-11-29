@class NSString, NSDictionary, NSArray;

@interface HMDANRRecord : HMDTrackerRecord <HMDRecordStoreObject>

@property (retain, nonatomic) NSString *anrLogStr;
@property (nonatomic) unsigned long long anrTime;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeDiskUsage;
@property (nonatomic) long long freeDiskBlockSize;
@property (retain, nonatomic) NSDictionary *customParams;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSDictionary *filters;
@property (nonatomic) long long blockDuration;
@property (retain, nonatomic) NSString *access;
@property (retain, nonatomic) NSString *lastScene;
@property (nonatomic) BOOL isEnableSample;
@property (nonatomic) BOOL isSampleHit;
@property (nonatomic) BOOL isLaunch;
@property (retain, nonatomic) NSDictionary *operationTrace;
@property (retain, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) NSArray *flameGraph;
@property (retain, nonatomic) NSDictionary *binaryImages;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL isScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bg_ignoreKeys;
+ (id)tableName;

@end
