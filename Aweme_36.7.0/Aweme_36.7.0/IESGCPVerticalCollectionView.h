@class NSString;

@interface IESGCPVerticalCollectionView : UICollectionView <UIGestureRecognizerDelegate, IESGCPGameDetailHandleGestureConflictProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needHandleGestureFirst;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;

@end
