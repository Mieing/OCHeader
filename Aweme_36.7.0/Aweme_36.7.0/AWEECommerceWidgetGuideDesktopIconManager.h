@class NSString, NSMutableArray, AWEECommerceWidgetGuideEntranceModel;

@interface AWEECommerceWidgetGuideDesktopIconManager : NSObject <AWEUGDesktopChannelGuideMessage, AWEUGSceneDesktopChannelGuideEvadeProtocol, AWEECWidgetGuideManagerService>

@property (retain, nonatomic) AWEECommerceWidgetGuideEntranceModel *entranceModel;
@property (copy, nonatomic) NSString *sceneType;
@property (retain, nonatomic) NSMutableArray *hasPreloadEntranceList;
@property (nonatomic) BOOL passFrequencyDebugSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3 config:(id)a4;
- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (id)preloadConfig;
- (void)trackerWithAction:(id)a0 state:(id)a1 entrance:(id)a2;
- (void)checkCanShowWithParams:(id)a0 completion:(id /* block */)a1;
- (void)showGuidePanelWithParams:(id)a0 completion:(id /* block */)a1;
- (void)preloadWithEntrance:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)position;
- (id)init;
- (void)dealloc;
- (id)tabID;

@end
