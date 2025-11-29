@class NSString, UIViewController, IESLiveAudienceContainerContext;
@protocol IESLiveAudienceRoomComponentDelegate, IESLiveComponentBootLoaderProtocol, IESLiveRoomService, IESLivePerfSampler;

@interface IESLiveAudienceRoomComponentProcess : NSObject <IESLiveComponentLifeCycleNotifier, IESLiveComponentLoadFinish>

@property (weak, nonatomic) UIViewController<IESLiveAudienceRoomComponentDelegate> *delegate;
@property (retain, nonatomic) IESLiveAudienceContainerContext *containerContext;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) id<IESLiveComponentBootLoaderProtocol> componentLoader;
@property (nonatomic) long long currentComponentLoadLevel;
@property (nonatomic) BOOL isAllComponentMountFinish;
@property (nonatomic) BOOL didLoadComponents;
@property (nonatomic) BOOL isAllComponentLoadFinish;
@property (nonatomic) BOOL enterRoomUpgradeEnable;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didEnterRoom:(id)a0;
- (void)didPreloadRoom:(id)a0;
- (void)componentCreateDidFinishForLevel:(long long)a0;
- (void)componentMountDidFinishForLevel:(long long)a0;
- (void)componentAppearDidFinishForLevel:(long long)a0;
- (void)componentDestroyDidFinishForLevel:(long long)a0;
- (void)componentFirstFrameDidStartLoad;
- (void)componentFirstFrameDidFinishWithCost:(double)a0;
- (void)registerComponentLoader;
- (BOOL)componentMountIsFinishForLevel;
- (void)realInstallComponentLoaderWithPre:(BOOL)a0;
- (void)schedulerInstallComponentLoaderWithPre:(BOOL)a0;
- (void)componentLoaderInstallWithPre:(BOOL)a0;
- (void)fireComponentAllLoadedNodeTask;
- (void)fireComponentStartLoadNodeTask;
- (void)fireComponentP0LoadedNodeTaskWithCost:(double)a0;
- (id)initWithContainerContext:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
