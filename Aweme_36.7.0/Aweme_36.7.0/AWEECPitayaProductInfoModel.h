@class NSString;

@interface AWEECPitayaProductInfoModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *productId;
@property (nonatomic) long long productFrom;
@property (nonatomic) BOOL bought;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
