@class NSString;

@interface ACCMVReframe : MTLModel <MTLJSONSerializing>

@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double rotateAngle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
