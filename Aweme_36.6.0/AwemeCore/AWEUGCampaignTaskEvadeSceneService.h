@class AWECampaignWatchTaskModel, NSString;

@interface AWEUGCampaignTaskEvadeSceneService : NSObject <AWEUGCampaignTaskEvadeSceneProtocol>

@property (retain, nonatomic) AWECampaignWatchTaskModel *watchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sceneMap;
- (BOOL)isNearbyDetailViewController;
- (BOOL)isValidDetailPageForRefer:(id)a0;
- (BOOL)isFullScreenNearby;
- (BOOL)needEvadeCountDownFromScene:(id)a0;
- (BOOL)needEvadeShowingFromScene:(id)a0;
- (void).cxx_destruct;

@end
