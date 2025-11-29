@class NSString;

@interface AWETabBackToFeedStrategyItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) long long playerProgress;
@property (nonatomic) long long triggerCount;
@property (nonatomic) long long strategy;
@property (nonatomic) long long guideType;
@property (copy, nonatomic) NSString *guideDesc;
@property (copy, nonatomic) NSString *guideTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
