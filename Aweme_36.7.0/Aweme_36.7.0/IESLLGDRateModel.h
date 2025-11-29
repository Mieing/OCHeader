@class NSString;

@interface IESLLGDRateModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableHeadPerformanceOpt;
@property (nonatomic) BOOL fixRateContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
