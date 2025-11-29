@class NSString;

@interface AWEIMMixPhotoStyleModelJumpConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *redirectSchema;
@property (nonatomic) long long appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
