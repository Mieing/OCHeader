@class NSString, AWEDTONewMomentSpringParam;

@interface AWEDTONewMomentDraftModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDTONewMomentSpringParam *springParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)springParamJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
