@class NSString;

@interface WCStoryPostLimitObj : NSObject <PBCoding>

@property (nonatomic) unsigned int hadPostedCount;
@property (nonatomic) unsigned int nextPostPeriod;
@property (nonatomic) unsigned int lastPostSuccTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_hadPostedCount;
+ (void)PBArrayAdd_nextPostPeriod;
+ (void)PBArrayAdd_lastPostSuccTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
