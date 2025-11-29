@class NSString;

@interface WCFinderLocationPoiDetailDelegateObj : NSObject <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isTabViewHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
