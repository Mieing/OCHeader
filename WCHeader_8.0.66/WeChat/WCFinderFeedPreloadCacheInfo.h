@class NSString;

@interface WCFinderFeedPreloadCacheInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *fileFormat;
@property (copy, nonatomic) NSString *mediaURL;
@property (nonatomic) unsigned long long cacheTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_fileFormat;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_mediaURL;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
