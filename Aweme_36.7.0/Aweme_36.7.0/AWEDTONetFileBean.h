@class NSString;

@interface AWEDTONetFileBean : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sourceMaterialPath;
@property (copy, nonatomic) NSString *algorithm;
@property (copy, nonatomic) NSString *serverMaterialPath;
@property (copy, nonatomic) NSString *jsonParams;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
