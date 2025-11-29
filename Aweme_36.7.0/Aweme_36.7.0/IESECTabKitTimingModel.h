@class NSError;

@interface IESECTabKitTimingModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) double pageCreateTime;
@property (nonatomic) double tabCreateTime;
@property (nonatomic) double tabEnterTime;
@property (nonatomic) double tabLeaveTime;
@property (nonatomic) double tabDataRequestStartTime;
@property (nonatomic) double tabDataRequestEndTime;
@property (nonatomic) double hybridViewCreateTime;
@property (nonatomic) double hybridViewLoadFinishTime;
@property (retain, nonatomic) NSError *hybridViewLoadFinishError;

- (id)iesectabkit_timing_toDict;
- (void).cxx_destruct;

@end
