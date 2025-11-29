@class NSString, QAOIMarkerHandler;

@interface QAOIMarker : NSObject

@property (retain, nonatomic) QAOIMarkerHandler *handler;
@property (copy, nonatomic) NSString *annoTextImgName;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (nonatomic) double annoTextImgWidth;
@property (nonatomic) double annoTextImgHeight;
@property (nonatomic) double annoTextStrokeWidth;
@property (copy, nonatomic) NSString *annoTextStrokeColor;
@property (copy, nonatomic) NSString *poiUID;
@property (copy, nonatomic) NSString *mainPoiUID;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) float fontSize;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) int priority;
@property (nonatomic) BOOL visible;

- (void).cxx_destruct;

@end
