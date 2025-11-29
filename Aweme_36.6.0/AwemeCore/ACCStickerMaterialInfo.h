@class NSString;

@interface ACCStickerMaterialInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long sourcePlatform;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
