@interface TIMXPBNUiInfo : GPBMessage

@property (nonatomic) int locationType;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int styleType;
@property (nonatomic) BOOL hasStyleType;
@property (nonatomic) float zoomScreenWidth;
@property (nonatomic) BOOL hasZoomScreenWidth;
@property (nonatomic) float zoomScreenHeight;
@property (nonatomic) BOOL hasZoomScreenHeight;
@property (nonatomic) float zoomRatio;
@property (nonatomic) BOOL hasZoomRatio;
@property (nonatomic) float zoomLevel;
@property (nonatomic) BOOL hasZoomLevel;

+ (id)descriptor;

@end
