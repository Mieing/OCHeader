@class NSMutableDictionary, NSString, BDPUniqueID, NSMutableArray;

@interface BDPPageTimelineGroup : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSMutableArray *points;
@property (retain, nonatomic) NSMutableDictionary *collectPoints;
@property (copy, nonatomic) id /* block */ routeEndParamBlk;
@property (copy, nonatomic) NSString *routeID;
@property (nonatomic) long long appType;
@property (retain, nonatomic) NSMutableArray *uniqueEventRecord;

+ (BOOL)hookPerformance;

- (void)addPageTimelinePointWithName:(id)a0 param:(id)a1 common:(id)a2 timestamp:(long long)a3;
- (void)myhook_addPageTimelinePointWithName:(id)a0 param:(id)a1 common:(id)a2 timestamp:(long long)a3;
- (id)collectPointArray;
- (void).cxx_destruct;

@end
