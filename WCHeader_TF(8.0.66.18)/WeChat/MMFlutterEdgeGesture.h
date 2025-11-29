@class NSObject;
@protocol MMFlutterEdgeGestureDelegate;

@interface MMFlutterEdgeGesture : UIScreenEdgePanGestureRecognizer

@property (nonatomic) NSObject<MMFlutterEdgeGestureDelegate> *touchDelegate;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
