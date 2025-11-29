@class AWELiveChannelControllerManager, NSString, NSDictionary, UIViewController;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedLiveChannelController : NSObject <AWEUGDesktopChannelGuideMessage, AWEUGSceneDesktopChannelGuideEvadeProtocol, AWEMessageReachChannelCommunicator, AWEUGSceneUndertakeEvadeProtocol, AWEHPChannelControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long accessInterval;
@property (nonatomic) BOOL hasLeaveLiveController;
@property (retain, nonatomic) AWELiveChannelControllerManager *channelManager;
@property (nonatomic) long long loadType;
@property (retain, nonatomic) NSDictionary *landingParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;

- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void)showDesktopChannelGuide:(id)a0 config:(id)a1 guideType:(id)a2;
- (void)channelEnterWithModel:(id)a0;
- (void)channelLeaveWithModel:(id)a0;
- (void)channelTopTabContainerDidDisappear;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)getCustomTrackParamsWithTrackInfo:(id)a0;
- (BOOL)mr_isSkylightOpen;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (void)channelLandingTabWithModel:(id)a0;
- (void)channelBeginLandingTabWithModel:(id)a0;
- (void)channelWillEnterWithType:(long long)a0;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (id)channelGetCommunicationObject:(id)a0 byProtocol:(id)a1;
- (void)channel:(id)a0 startPreload:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)getContentViewController;
- (void)generateContentVCIfNeed;
- (long long)preloadSceneForPreloadType:(unsigned long long)a0;
- (long long)willLoadTypeForPreloadType:(unsigned long long)a0;
- (void)liveTabPinTopViewShowWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)position;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)tabID;

@end
