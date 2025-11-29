@class NSArray, IESECCoordinateLocation, NSString;

@interface IESECGradientInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (retain, nonatomic) IESECCoordinateLocation *startPoint;
@property (retain, nonatomic) IESECCoordinateLocation *endPoint;
@property (retain, nonatomic) IESECCoordinateLocation *startPosition;
@property (retain, nonatomic) IESECCoordinateLocation *endPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
