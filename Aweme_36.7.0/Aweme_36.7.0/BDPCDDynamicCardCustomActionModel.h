@class NSArray;

@interface BDPCDDynamicCardCustomActionModel : BDPCDDynamicCardSupportableValueModel

@property (nonatomic) long long eventType;
@property (copy, nonatomic) NSArray *customActionList;

- (void).cxx_destruct;

@end
