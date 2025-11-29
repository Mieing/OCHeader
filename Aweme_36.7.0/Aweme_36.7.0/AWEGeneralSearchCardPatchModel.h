@class NSString, NSArray, AWEGeneralSearchModel, NSDictionary;

@interface AWEGeneralSearchCardPatchModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *fingerprint;
@property (copy, nonatomic) NSArray *operations;
@property (retain, nonatomic) AWEGeneralSearchModel *patchedModel;
@property (copy, nonatomic) NSDictionary *patchedPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
