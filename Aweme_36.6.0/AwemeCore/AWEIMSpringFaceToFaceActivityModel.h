@class NSArray, AWEIMSpringFaceToFaceInputPandelModel, AWEIMSpringFaceToFaceSchemaModel, NSString;

@interface AWEIMSpringFaceToFaceActivityModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEIMSpringFaceToFaceInputPandelModel *panel;
@property (copy, nonatomic) NSArray *keyboard;
@property (copy, nonatomic) NSArray *pushInfo;
@property (copy, nonatomic) AWEIMSpringFaceToFaceSchemaModel *schemaModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pushInfoJSONTransformer;
+ (id)panelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)schemaModelJSONTransformer;

- (void).cxx_destruct;

@end
