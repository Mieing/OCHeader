@class NSString;

@interface AWESearchNearbyEntranceColorConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *startColor;
@property (copy, nonatomic) NSString *midColor;
@property (copy, nonatomic) NSString *endColor;
@property (nonatomic) double startPointX;
@property (nonatomic) double startPointY;
@property (nonatomic) double endPointX;
@property (nonatomic) double endPointY;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
