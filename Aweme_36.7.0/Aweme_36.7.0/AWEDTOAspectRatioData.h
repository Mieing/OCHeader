@class NSString;

@interface AWEDTOAspectRatioData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long aspectRatioRatioTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
