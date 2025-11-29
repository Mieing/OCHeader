@class NSArray, NSString;

@interface QVisModelLayerPayload : QVisLayerPayload

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double altitude;
@property (nonatomic) BOOL autoScale;
@property (nonatomic) double rotationX;
@property (nonatomic) double rotationY;
@property (nonatomic) double rotationZ;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) long long animationType;
@property (retain, nonatomic) NSArray *pedestal;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *astcUrl;
@property (copy, nonatomic) NSString *ktx2Url;
@property (copy, nonatomic) NSString *target_name;
@property (nonatomic) double exposure;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getAppropriateModelURL;
- (void).cxx_destruct;

@end
