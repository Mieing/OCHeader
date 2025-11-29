@class NSString, NSMutableArray;

@interface AWEStudioPublishLandingService : HTSService <AWEStudioPublishLandingService>

@property (retain, nonatomic) NSMutableArray *landingInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPublishLandingInfo:(id)a0;
- (void)removePublishLandingInfo:(id)a0;
- (id)getPublishLandingInfoWithTaskID:(id)a0;
- (void)landingWithTask:(id)a0;
- (BOOL)enablePublishQuickShareProgressViewShowInFriend;
- (unsigned long long)publishLandingTab;
- (BOOL)enablePublishLandingOptimize;
- (id)getPublishLandingInfoWithAwemeID:(id)a0;
- (BOOL)shouldLandingFamiliarTab;
- (id)landingInfoWithTask:(id)a0;
- (void)landingToTab:(long long)a0 publishModel:(id)a1;
- (void)trackWithLandingInfo:(id)a0 task:(id)a1;
- (id)noLandingStrategyNameList;
- (id)strategyWithTask:(id)a0 landingStrategyNameList:(id)a1;
- (id)landingStrategyNameList;
- (void)routerWithTabIds:(id)a0 publishModel:(id)a1;
- (BOOL)p_enableFamiliarTab;
- (void).cxx_destruct;
- (id)init;

@end
