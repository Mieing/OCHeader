@class NSString, AWEHPProfileSideBarManager, AWELeftSideBarBasePresenter;

@interface AWEHPProfileSecondLevelPageAbilityImpl : NSObject <AWEHPProfileSecondLevelPageAbility>

@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) AWEHPProfileSideBarManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getHPSideBarControllerLoadModelWithOriginModel:(id)a0;
- (id)initWithPresenter:(id)a0 withManager:(id)a1;
- (id)getHPSideBarControllerFactory;
- (void)setHPSideBarViewControllerManager:(id)a0;
- (void)updateHPSideBarViewControllerCollectionView;
- (void)recoverHPSideBarViewControllerCollectionView;
- (void).cxx_destruct;

@end
