@class NSString;

@interface WCFinderFeedDetailScrollView : UIScrollView <UIGestureRecognizerDelegate, WCFinderHalfScreenProtocol>

@property (copy, nonatomic) id /* block */ mediaViewGetter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)getListenHalfAnimView;
- (void).cxx_destruct;

@end
