@class NSDictionary, NSMutableArray, WAMapAnnotationView;

@interface WAJSEventHandler_translateMapMarker : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSMutableArray *keyFrames;
@property (retain, nonatomic) NSDictionary *dic;
@property (weak, nonatomic) WAMapAnnotationView *markerView;
@property (nonatomic) int workingAnim;

- (void)handleJSEvent:(id)a0;
- (void)startKeyFrameAnimation;
- (void)checkNextFrameAnimation;
- (void).cxx_destruct;

@end
