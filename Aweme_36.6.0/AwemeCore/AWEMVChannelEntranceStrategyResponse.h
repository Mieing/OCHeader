@class AWEMVChannelEntranceStrategyDebugInfo;

@interface AWEMVChannelEntranceStrategyResponse : AWEBaseApiModel

@property (nonatomic) unsigned long long strategy;
@property (retain, nonatomic) AWEMVChannelEntranceStrategyDebugInfo *debugInfo;

+ (id)debugInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
