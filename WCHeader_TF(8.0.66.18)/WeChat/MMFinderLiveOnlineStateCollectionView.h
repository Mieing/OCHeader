@class NSString, MMLiveTaskId, MMFinderLiveOnlineStateCollectionViewCell;

@interface MMFinderLiveOnlineStateCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveOnlineStateCollectionViewCell *myUserStateCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
