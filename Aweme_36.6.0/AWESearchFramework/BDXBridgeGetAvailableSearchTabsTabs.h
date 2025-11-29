@class NSString, NSNumber;

@interface BDXBridgeGetAvailableSearchTabsTabs : BDXBridgeModel

@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *tabName;
@property (retain, nonatomic) NSNumber *feedType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
