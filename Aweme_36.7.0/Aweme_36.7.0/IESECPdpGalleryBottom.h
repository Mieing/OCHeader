@class NSArray, NSString, IESECPdpGalleryBottomConfig;

@interface IESECPdpGalleryBottom : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECPdpGalleryBottomConfig *config;
@property (copy, nonatomic) NSArray *slices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
