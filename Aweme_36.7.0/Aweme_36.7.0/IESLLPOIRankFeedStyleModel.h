@class NSString;

@interface IESLLPOIRankFeedStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *internalFlowStartColor;
@property (copy, nonatomic) NSString *internalFlowEndColor;
@property (copy, nonatomic) NSString *listLabelStartColor;
@property (copy, nonatomic) NSString *listLabelEndColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
