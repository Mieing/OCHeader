@class NSString;

@interface WCFinderOuterPreloadTask : NSObject <PBCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long preloadPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_preloadPercent;
+ (void)initialize;

@end
