@class NSArray, NSString;

@interface IESGCPSegmentSlideScrollView : UIScrollView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSArray *otherGestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOtherGestures:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
