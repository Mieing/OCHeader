@class NSNumber, AWEAdIndicatorLinkCoordinateModel, NSString;

@interface AWEAdIndicatorLinkPositionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAdIndicatorLinkCoordinateModel *coordinate;
@property (retain, nonatomic) NSNumber *timestampMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coordinateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
