@interface WCTimelineFoldSyncContext : NSObject

@property (nonatomic) unsigned long long nearbyFoldId;
@property (nonatomic) unsigned long long minIndexId;
@property (nonatomic) unsigned int foldSectionSize;

- (id)description;

@end
