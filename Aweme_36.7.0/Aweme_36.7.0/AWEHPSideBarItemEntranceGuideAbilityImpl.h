@class NSString, AWELeftSideBarBasePresenter;
@protocol AWEHPProfileSecondLevelPageItemUndertakeHostProtocol;

@interface AWEHPSideBarItemEntranceGuideAbilityImpl : NSObject <AWEHPSideBarItemEntranceGuideAbility>

@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) id<AWEHPProfileSecondLevelPageItemUndertakeHostProtocol> undertakeHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideBadge;
- (long long)sideBarRedDotStyle;
- (void)showBadgeWithModel:(id)a0 withVersion:(id)a1 withRevealHierarchy:(long long)a2 completion:(id /* block */)a3;
- (id)initWithPresenter:(id)a0 withUndertakeHost:(id)a1;
- (void).cxx_destruct;

@end
