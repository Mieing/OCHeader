@class NSString;

@interface MMFinderLiveHonCoverCacheInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *honCoverUrl;
@property (nonatomic) BOOL received;
@property (nonatomic) BOOL honCoverReceive;
@property (nonatomic) unsigned int full;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_honCoverUrl;
+ (void)PBArrayAdd_received;
+ (void)PBArrayAdd_honCoverReceive;
+ (void)PBArrayAdd_full;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
