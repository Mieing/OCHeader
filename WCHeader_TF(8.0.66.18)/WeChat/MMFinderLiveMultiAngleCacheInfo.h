@class NSString;

@interface MMFinderLiveMultiAngleCacheInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) BOOL show;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_show;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
