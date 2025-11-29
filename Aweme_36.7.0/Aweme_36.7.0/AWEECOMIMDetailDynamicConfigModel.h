@class NSDictionary, NSArray, NSString;

@interface AWEECOMIMDetailDynamicConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *cardMap;
@property (copy, nonatomic) NSArray *sliceTemplatePreloadList;
@property (copy, nonatomic) NSArray *lynxTemplatePreloadList;
@property (nonatomic) BOOL isSingleJSWorker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardMapJSONTransformer;
+ (id)sliceTemplatePreloadListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
