@class NSString;

@interface MMFinderLiveGestureWeVisionRenderParams : NSObject

@property (retain, nonatomic) NSString *gestureId;
@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) double translationX;
@property (nonatomic) double translationY;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;

- (id)description;
- (void).cxx_destruct;

@end
