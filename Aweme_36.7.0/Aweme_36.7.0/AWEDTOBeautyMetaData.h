@class NSString;

@interface AWEDTOBeautyMetaData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *effectName;
@property (copy, nonatomic) NSString *reserved_kw_id;
@property (copy, nonatomic) NSString *strength;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strengthJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
