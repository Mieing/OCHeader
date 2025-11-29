@class IESECPdpGalleryPendants, IESECPdpGalleryConfig, NSString, IESECPdpGalleryBottom, IESECPdpGalleryMeta;

@interface IESECPdpGalleryModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECPdpGalleryPendants *pendants;
@property (retain, nonatomic) IESECPdpGalleryBottom *bottom;
@property (retain, nonatomic) IESECPdpGalleryConfig *config;
@property (retain, nonatomic) IESECPdpGalleryMeta *meta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
