@class AWEMomentCameraPolaroidConfigItem, NSDictionary, NSString;

@interface AWEMomentCameraPolaroidConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEMomentCameraPolaroidConfigItem *fallback;
@property (copy, nonatomic) NSDictionary *styles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fallbackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
