@class NSDictionary, NSString, BDALokiLayoutModel;

@interface BDALokiModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) BDALokiLayoutModel *layout;
@property (copy, nonatomic) NSDictionary *lynxGlobalProps;
@property (copy, nonatomic) NSDictionary *hostData;
@property (copy, nonatomic) NSString *lokiScene;
@property (nonatomic) long long componentType;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)layoutJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
