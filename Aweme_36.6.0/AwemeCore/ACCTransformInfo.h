@class NSString;

@interface ACCTransformInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
