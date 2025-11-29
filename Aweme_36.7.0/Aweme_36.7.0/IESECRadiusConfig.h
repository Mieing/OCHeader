@class NSString;

@interface IESECRadiusConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double topLeft;
@property (nonatomic) double topRight;
@property (nonatomic) double bottomLeft;
@property (nonatomic) double bottomRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
