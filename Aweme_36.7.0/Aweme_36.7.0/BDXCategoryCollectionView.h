@class NSArray, NSString;
@protocol BDXCategoryCollectionViewGestureDelegate;

@interface BDXCategoryCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSArray *indicators;
@property (weak, nonatomic) id<BDXCategoryCollectionViewGestureDelegate> gestureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
