@class NSArray, NSString, BDXLynxMapStyleModel;

@interface BDXLynxMapBridgeModel : MTLModel <MTLJSONSerializing> {
    unsigned long long coordinatesCount;
    struct CLLocationCoordinate2D { double x0; double x1; } *coordinates;
}

@property (copy, nonatomic) NSArray *coordinateNums;
@property (retain, nonatomic) BDXLynxMapStyleModel *style;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL customDraw;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsWithArray:(id)a0;
+ (id)customWigetViewJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)modelWithDictionary:(id)a0;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
