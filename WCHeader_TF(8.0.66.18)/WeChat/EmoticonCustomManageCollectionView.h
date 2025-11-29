@class CADisplayLink;

@interface EmoticonCustomManageCollectionView : MMLoadMoreCollectionView

@property (retain, nonatomic) CADisplayLink *scrollDisplayLink;
@property (nonatomic) unsigned long long autoScrollType;
@property (nonatomic) double speedPercent;
@property (readonly, nonatomic) BOOL canAutoScroll;

- (void)cleanCurrentDisplayLink;
- (void)autoScrollUp;
- (void)autoScrollDown;
- (double)scrollSpeed;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
