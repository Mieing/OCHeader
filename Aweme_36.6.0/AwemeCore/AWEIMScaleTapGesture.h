@class NSString;

@interface AWEIMScaleTapGesture : UIGestureRecognizer <AWEIMScaleTapGestureProtocol>

@property (nonatomic) struct CGPoint { double x; double y; } sourcePoint;
@property (nonatomic) double moveCancelDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
