@class IESECPdpGalleryConfig, NSArray, IESECPdpGalleryLynxPendants, NSString;

@interface IESECPdpGalleryPendants : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECPdpGalleryConfig *config;
@property (retain, nonatomic) IESECPdpGalleryLynxPendants *lynxPendantContainer;
@property (copy, nonatomic) NSArray *slices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
