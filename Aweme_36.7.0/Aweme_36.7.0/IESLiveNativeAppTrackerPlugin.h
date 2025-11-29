@class NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppTrackerPlugin : NSObject <IESLiveNativeAppTrackerPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)trackBaseEvent:(id)a0 extraBlock:(id /* block */)a1;
- (void)trackTimorItem:(id)a0 isShowOrClick:(BOOL)a1;
- (void)trackBubble:(id)a0 showWithShelfInfo:(id)a1;
- (void)trackShelfModifiedWithShelfInfo:(id)a0;
- (void)trackShelfRemovedWithShelfInfo:(id)a0 source:(id)a1;
- (void)trackShelfCardModifyResultWithShelfInfo:(id)a0 result:(id)a1 createInfo:(id)a2;
- (void)trackShelfCardModifySubmitWithShelfInfo:(id)a0 shelfCardInfo:(id)a1 createInfo:(id)a2;
- (void)trackCloseNativeAppLoadWithSource:(id)a0 shelfInfo:(id)a1;
- (void)trackCouponWithEvent:(id)a0 extra:(id)a1;
- (void)trackCardExplainWithShelfInfo:(id)a0 isStart:(BOOL)a1 isChange:(BOOL)a2;
- (void)trackPanelViewSaveWithShelfInfo:(id)a0;
- (void)trackNativeAppGiveupReminderWithShelfInfo:(id)a0 isFirstAdd:(BOOL)a1;
- (void)trackItemShowMsgWithID:(id)a0 fromSource:(long long)a1;
- (void)trackBeforeLiveTimorIcon:(BOOL)a0 liveType:(id)a1 source:(id)a2;
- (void)trackNativeAppAddWithFirstAddType:(BOOL)a0 addType:(id)a1 shelfInfo:(id)a2;
- (void)trackCloseNativeAppWithShelfInfo:(id)a0;
- (void)trackExitConfirmAlertWithExitSource:(id)a0 clickSource:(id)a1 shelfInfo:(id)a2;
- (void)trackNativeAppWithEvent:(id)a0 mpId:(id)a1 mpName:(id)a2 position:(id)a3 extraBlock:(id /* block */)a4;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void).cxx_destruct;
- (id)pluginContext;

@end
