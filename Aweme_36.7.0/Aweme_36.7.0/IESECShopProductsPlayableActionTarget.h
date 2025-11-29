@class IESECShopProductsVideoControl, NSString, IESECShopProductsLynxControl, IESECShopProductsPlayableManager, IESECShopProductsHybridContext, IESECShopProductsPlayableAreaCoordinator, IESECShopProductsImageSlideshowControl;

@interface IESECShopProductsPlayableActionTarget : NSObject <IESECShopProductsPlayableAction, IESECShopProductsPlayableList, IESECShopProductsPlayableManagerDelegate> {
    IESECShopProductsHybridContext *_context;
    IESECShopProductsPlayableManager *_playableManager;
    IESECShopProductsPlayableAreaCoordinator *_areaCoordinator;
    IESECShopProductsImageSlideshowControl *_slideshowControl;
    IESECShopProductsVideoControl *_videoControl;
    IESECShopProductsLynxControl *_lynxControl;
    NSString *_lastUniqueID;
}

@property (readonly, nonatomic) IESECShopProductsPlayableManager *playableManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellAtIndexPath:(id)a0;
- (void)slideshowContainerNeedsUpdate;
- (id)slideshowContainerAtIndexPath:(id)a0;
- (void)updateVisibleArea;
- (id)playableListCollectionView;
- (BOOL)playableListShouldPlayAtIndexPath:(id)a0 task:(id)a1;
- (BOOL)playableListShouldStopPlayableTask:(id)a0;
- (void)playableManager:(id)a0 handlePlayableTask:(id)a1;
- (void)playableManager:(id)a0 playableTaskDidEnd:(id)a1;
- (void)skipCurrentPlayableTask;
- (void)playWithUniqueID:(id)a0;
- (id)initWithHybridContext:(id)a0;
- (id)videoPlayerContainerAtIndexPath:(id)a0;
- (id)productAtIndexPath:(id)a0;
- (id)itemConfigExtraAtIndexPath:(id)a0;
- (id)activatedMediaControl;
- (void).cxx_destruct;
- (void)stop;
- (id)itemAtIndexPath:(id)a0;

@end
