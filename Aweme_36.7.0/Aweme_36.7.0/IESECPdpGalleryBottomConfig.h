@class NSDictionary, NSString;

@interface IESECPdpGalleryBottomConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *visibility;
@property (copy, nonatomic) NSDictionary *addCartToast;
@property (nonatomic) long long bottomLeftRightMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
