@class UIColor, QLocationRedlinePayload, QLocationCompassPayload, UIImage;

@interface QLocationMarkerPayload : NSObject

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *circleFillColor;
@property (retain, nonatomic) QLocationCompassPayload *compass;
@property (retain, nonatomic) QLocationRedlinePayload *redline;

- (void).cxx_destruct;

@end
