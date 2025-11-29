@class UIViewController, NSString, BDPUniqueID, AWETimorGameLynxView;
@protocol BDPlatformContainerProtocol;

@interface AWETimorGameLynxUI : LynxUI <AWETimorGameLynxUIDelegate, BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage>

@property (retain, nonatomic) AWETimorGameLynxView *lynxView;
@property (retain, nonatomic) UIViewController<BDPlatformContainerProtocol> *container;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long playTime;
@property (nonatomic) BOOL eventEnableLoadStart;
@property (nonatomic) BOOL eventEnableLoadSuccess;
@property (nonatomic) BOOL eventEnableLoadFailed;
@property (nonatomic) BOOL eventEnableLoadProgress;
@property (nonatomic) BOOL eventEnableGameCompleted;
@property (nonatomic) BOOL eventEnableGameResume;
@property (nonatomic) BOOL eventEnableGamePause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1091;
+ (id)__lynx_prop_config__1272;
+ (id)__lynx_prop_config__1383;
+ (id)__lynx_prop_config__1454;

- (void)eventDidSet;
- (void)setMuted:(BOOL)a0 requestReset:(BOOL)a1;
- (void)applicationEnterBackGroundWithUniqueID:(id)a0;
- (void)applicationEnterForeGroundWithUniqueID:(id)a0;
- (void)applicationPkgDownloadProgress:(float)a0 uniqueID:(id)a1;
- (void)applicationLoadFinishWithUniqueID:(id)a0 error:(id)a1 content:(id)a2 extraParams:(id)a3;
- (void)applicationPlayableGameCompletion:(id)a0 uniqueID:(id)a1;
- (void)applicationPlayableGameCompletionByAPIWithSnapshot:(id)a0 uniqueID:(id)a1;
- (void)removeContainerVC;
- (void)setupPlayTimeIfNeed;
- (void)sendEventToLynx:(id)a0 params:(id)a1;
- (void)handlePlayableGameCompletionWithSnapshot:(id)a0 uniqueID:(id)a1 reason:(id)a2;
- (void)lynxViewDidMoveToSuperview;
- (void)lynxViewDidRemoved;
- (void)setSrc:(id)a0 requestReset:(BOOL)a1;
- (void)setStatus:(id)a0 requestReset:(BOOL)a1;
- (void)setPlayTime:(long long)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;
- (id)createView;

@end
