@class NSString, NSDictionary;

@interface IESLLPOIAnchorTagRateAggInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long showTagRateTab;
@property (nonatomic) long long showRateGrade;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *tagRateTypeText;
@property (copy, nonatomic) NSString *rateRouterUrl;
@property (copy, nonatomic) NSString *tabText;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
