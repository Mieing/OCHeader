@class NSString, NSDictionary;

@interface BDXBridgeMannorCoreEventReportParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (nonatomic) long long watchedDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
