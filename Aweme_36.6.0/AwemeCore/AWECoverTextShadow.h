@class NSString;

@interface AWECoverTextShadow : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *color;
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (nonatomic) double radius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
