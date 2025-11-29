@class NSString;

@interface AWETeenStoryContainerCollectionView : UICollectionView <AWEStoryContainerCollectionViewProtocol>

@property (nonatomic) BOOL enableEnterProfile;
@property (nonatomic) BOOL enableEdgePanWhenBounce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)edgePan:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
