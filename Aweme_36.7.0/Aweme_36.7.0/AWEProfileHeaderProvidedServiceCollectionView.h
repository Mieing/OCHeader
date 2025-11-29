@class NSString;

@interface AWEProfileHeaderProvidedServiceCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isFromHomepage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
