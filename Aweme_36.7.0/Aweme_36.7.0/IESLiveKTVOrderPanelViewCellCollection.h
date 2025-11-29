@class NSString;

@interface IESLiveKTVOrderPanelViewCellCollection : UICollectionView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL needGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
