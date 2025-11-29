@class NSString;

@interface LiveSubTitleCacheInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long liveStartTime;
@property (nonatomic) unsigned int isClosed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveStartTime;
+ (void)PBArrayAdd_isClosed;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
