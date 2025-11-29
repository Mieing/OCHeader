@class IESLiveInteractiveGiftListCollectionView, UICollectionViewLayout, IESLiveInteractiveGiftLibraryExistViewModel, IESLiveInteractiveGiftLibraryExistTopView, UIView;
@protocol IESLiveSubscription;

@interface IESLiveInteractiveGiftLibraryExistView : UIView

@property (retain, nonatomic) IESLiveInteractiveGiftListCollectionView *giftListView;
@property (retain, nonatomic) IESLiveInteractiveGiftLibraryExistTopView *topContainer;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (retain, nonatomic) id<IESLiveSubscription> giftItemsRefreshedDisposable;
@property (retain, nonatomic) IESLiveInteractiveGiftLibraryExistViewModel *viewModel;

- (void)didSetAttachingDIContext;
- (void)setUpRAC;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)setUpView;

@end
