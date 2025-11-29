@class NSString, BDPUniqueID, NSMutableArray;

@interface BDPLoadTimelineGroup : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSMutableArray *points;
@property (readonly, nonatomic) NSString *pointsJSON;
@property (nonatomic) int groupIdx;
@property (copy, nonatomic) NSString *uploadUrl;
@property (copy, nonatomic) NSString *lifeCycleId;

- (void).cxx_destruct;

@end
