@class IESLiveHotNewsStore, IESLiveHotspotEntranceView, NSString;
@protocol IESLiveTopicRouter, IESLiveHotNewsService;

@interface IESLiveHotNewsFragment : IESLiveRoomComponent <IESLiveHotNewsRouter, IESLiveStickerAnchorActions>

@property (retain, nonatomic) IESLiveHotNewsStore *store;
@property (retain, nonatomic) IESLiveHotspotEntranceView *entranceView;
@property (retain, nonatomic) id<IESLiveTopicRouter> actionCreator;
@property (retain, nonatomic) id<IESLiveHotNewsService> hotNewsService;
@property (nonatomic) BOOL enableLiveHotNews;
@property (nonatomic) BOOL hadShowAlphaAnim;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (void)stickerViewMoving:(id)a0;
- (void)stickerViewMoveEnd:(id)a0;
- (BOOL)hasHotNews;
- (void)exitHotNewsModeIfNeeded;
- (void)showOrUpdateEntranceViewWithTitle:(id)a0;
- (void).cxx_destruct;

@end
