@class NSString;

@interface BDXPagerListContainerCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (nonatomic, getter=isCategoryNestPagingEnabled) BOOL categoryNestPagingEnabled;
@property (nonatomic) BOOL horizonScrollEnable;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;

@end
