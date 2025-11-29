@class NSString;

@interface QAOIMarkerPayload : NSObject

@property (nonatomic) float fontSize;
@property (nonatomic) int markerID;
@property (nonatomic) int subMarkerID;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *annoTextImgName;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (nonatomic) double annoTextImgWidth;
@property (nonatomic) double annoTextImgHeight;
@property (nonatomic) double annoTextStrokeWidth;
@property (copy, nonatomic) NSString *annoTextStrokeColor;
@property (nonatomic) int priority;
@property (copy, nonatomic) NSString *annoTextImgKey;
@property (nonatomic) BOOL visible;

- (void).cxx_destruct;

@end
