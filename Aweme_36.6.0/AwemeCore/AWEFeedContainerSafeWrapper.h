@class NSString;
@protocol AWEAwemeFeedBaseContainerProtocol;

@interface AWEFeedContainerSafeWrapper : NSObject <AWEFeedContainerSafeWrapperProtocol>

@property (weak, nonatomic) id<AWEAwemeFeedBaseContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setAweui_viewControllerState:(unsigned long long)a0;
- (unsigned long long)maxReachedIndex;
- (long long)currentIndexPathForFullScreenCell;
- (long long)currentPlayIndex;
- (long long)willPlayIndex;
- (id)feedTableViewByBiz:(long long)a0;
- (long long)pageAppearState;
- (id)currentCellVC;
- (id)containerFeatureManager;
- (id)currentModelInDataController;
- (id)currentModelInScreen;
- (long long)currentIndex;
- (void).cxx_destruct;
- (id)containerView;
- (id)currentInteractionController;
- (id)containerContext;
- (long long)containerType;
- (id)willDisplayCell;
- (id)currentCell;
- (BOOL)isViewAppearing;

@end
