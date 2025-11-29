@class NSString;

@interface LiveFollowCacheInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long liveTaskId;
@property (nonatomic) unsigned int liveStartTime;
@property (nonatomic) BOOL isFinderBizLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveTaskId;
+ (void)PBArrayAdd_liveStartTime;
+ (void)PBArrayAdd_isFinderBizLive;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
