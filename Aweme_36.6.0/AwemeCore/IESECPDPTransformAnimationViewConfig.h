@class NSString;

@interface IESECPDPTransformAnimationViewConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double scaleX;
@property (nonatomic) double scaleY;
@property (nonatomic) double animateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
