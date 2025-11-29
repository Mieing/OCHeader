@class NSString;

@interface AWEPOITempoPOIHonorTagIconInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *width;
@property (copy, nonatomic) NSString *height;
@property (copy, nonatomic) NSString *marginLeft;
@property (copy, nonatomic) NSString *marginRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
