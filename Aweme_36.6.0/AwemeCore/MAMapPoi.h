@class NSString;

@interface MAMapPoi : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } winPoint;
@property (nonatomic) struct MAMapPoint { double x; double y; } geoPoint;
@property (nonatomic) struct CGPoint { double x; double y; } iconMin;
@property (nonatomic) struct CGPoint { double x; double y; } iconMax;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (nonatomic) long long poiType;

- (void).cxx_destruct;

@end
