@class NSNumber, NSString;

@interface AWEAdIndicatorLinkCoordinateModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *centerX;
@property (retain, nonatomic) NSNumber *centerY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
