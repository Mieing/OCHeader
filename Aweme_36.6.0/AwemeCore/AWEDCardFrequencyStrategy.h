@class NSString, NSArray, AWEDCardFrequencyStatsSelectRange;

@interface AWEDCardFrequencyStrategy : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *scenes;
@property (retain, nonatomic) AWEDCardFrequencyStatsSelectRange *range;
@property (nonatomic) long long exposedCount;
@property (nonatomic) long long continuousSkipCount;
@property (nonatomic) double workDurationFromRangeEnd;
@property (readonly, nonatomic) long long limitType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
