@class NSString;

@interface APCDTOCustomCellConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *customCellSchema;
@property (copy, nonatomic) NSString *customCellImageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
