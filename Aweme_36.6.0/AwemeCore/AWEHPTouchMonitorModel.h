@class UITouch, NSMutableDictionary, NSDictionary, NSArray;

@interface AWEHPTouchMonitorModel : NSObject

@property (weak, nonatomic) UITouch *touch;
@property (nonatomic) BOOL isSlideTouch;
@property (nonatomic) struct CGPoint { double x; double y; } beganLocation;
@property (nonatomic) double beganTimestamp;
@property (retain, nonatomic) NSMutableDictionary *gesturesShouldBeginResults;
@property (retain, nonatomic) NSDictionary *gesturesPreNonRespondReason;
@property (retain, nonatomic) NSMutableDictionary *context;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (retain, nonatomic) NSArray *respondGestures;

- (void)updateTrackParamsWhenFirstMoved;
- (void).cxx_destruct;

@end
