@class NSArray, NSString;

@interface AWELeftSideBarPlayletDynamicDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *entryModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
