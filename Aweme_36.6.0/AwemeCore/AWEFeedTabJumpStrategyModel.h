@class AWEFeedTabJumpRollBackConfig, NSArray, NSString;

@interface AWEFeedTabJumpStrategyModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEFeedTabJumpRollBackConfig *rollBackConfig;
@property (nonatomic) long long showInternalHours;
@property (nonatomic) long long showFrequencyPerInternalHours;
@property (retain, nonatomic) NSArray *strategyArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategyArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
