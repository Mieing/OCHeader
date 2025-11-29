@class NSArray, NSString;

@interface AWEPOILivePurchaseAtmosphereBackgroundItem : NSObject

@property (retain, nonatomic) NSArray *locations;
@property (retain, nonatomic) NSArray *colors;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (retain, nonatomic) NSArray *borderLocations;
@property (retain, nonatomic) NSArray *borderColors;
@property (nonatomic) struct CGPoint { double x; double y; } borderStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } borderEndPoint;
@property (copy, nonatomic) NSString *imageUrl;

+ (id)convertItemWithDict:(id)a0;
+ (id)convertArrayObjToNum:(id)a0;
+ (struct CGPoint { double x0; double x1; })convertPointWithArray:(id)a0;

- (void).cxx_destruct;

@end
