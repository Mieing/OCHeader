@class NSString, NSArray;

@interface AWEServerHandlePicData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *models;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
