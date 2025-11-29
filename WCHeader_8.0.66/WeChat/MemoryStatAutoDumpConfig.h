@class NSString;

@interface MemoryStatAutoDumpConfig : NSObject <PBCoding>

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL uploadReport;
@property (nonatomic) int internal;
@property (nonatomic) int threshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_internal;
+ (void)PBArrayAdd_threshold;
+ (void)PBArrayAdd_uploadReport;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
