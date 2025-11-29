@class NSString, IESECURLModel;

@interface IESECShopImageInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *imageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
