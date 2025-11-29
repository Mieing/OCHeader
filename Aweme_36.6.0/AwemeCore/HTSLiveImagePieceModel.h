@class IESLiveImage, NSString;

@interface HTSLiveImagePieceModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) IESLiveImage *image;
@property (nonatomic) float scalingRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
