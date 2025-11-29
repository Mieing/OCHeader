@class APCDTOPoint, NSString;

@interface APCDTONormalizedLocation : MTLModel <MTLJSONSerializing>

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (retain, nonatomic) APCDTOPoint *alignPoint;
@property (retain, nonatomic) APCDTOPoint *alignPosition;
@property (nonatomic) BOOL persistentAlign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alignPointJSONTransformer;
+ (id)alignPositionJSONTransformer;
+ (id)normalizedLocationWithGeometryModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)innerLocationModel;
- (void).cxx_destruct;
- (id)init;

@end
