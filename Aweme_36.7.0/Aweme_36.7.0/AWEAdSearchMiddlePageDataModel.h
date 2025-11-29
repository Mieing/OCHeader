@class NSString, AWESearchFullScreenAdEggPreloadModel;

@interface AWEAdSearchMiddlePageDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWESearchFullScreenAdEggPreloadModel *adEggPreloadModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adEggPreloadModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)modelType;
- (void).cxx_destruct;

@end
