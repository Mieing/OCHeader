@class NSString, NSArray;

@interface AWEResourceDiskManager : NSObject <AWEResourceDiskManagerABOptionProtocol, AWEResourceDiskManagerHMDHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *expiredList;
@property (nonatomic) double cleanSize;
@property (nonatomic) long long maxCacheSize;

+ (id)getFileAccessLastDateAtPath:(id)a0;
+ (id)resourceManagerOptimizeConfig;
+ (BOOL)abResourceExpiredByAccessTime;
+ (void)setupHMDDiskHook;
+ (BOOL)isExpiredByAccessTime;
+ (id)sharedInstance;

@end
