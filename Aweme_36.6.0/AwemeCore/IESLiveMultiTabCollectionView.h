@class NSString;

@interface IESLiveMultiTabCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ gsetureShouldBegin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
