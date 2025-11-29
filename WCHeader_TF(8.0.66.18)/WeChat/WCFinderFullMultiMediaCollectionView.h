@class NSString, UIViewController;
@protocol WCFinderFullMultiMediaCollectionGestureConflictHandler;

@interface WCFinderFullMultiMediaCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIViewController<WCFinderFullMultiMediaCollectionGestureConflictHandler> *currentHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)selfDidScroll;
- (void).cxx_destruct;

@end
