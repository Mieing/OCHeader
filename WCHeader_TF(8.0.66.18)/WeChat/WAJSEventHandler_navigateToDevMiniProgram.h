@class WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_navigateToDevMiniProgram : WAJSEventHandler_BaseEvent {
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
}

- (void)handleJSEvent:(id)a0;
- (void)navigateToDevMiniProgramWithParam:(id)a0 appID:(id)a1 userName:(id)a2;
- (void)navigateToMiniProgramWitAppID:(id)a0 userName:(id)a1 debugMode:(unsigned long long)a2 pagePath:(id)a3 extraData:(id)a4 debugLaunchInfo:(id)a5 scene:(unsigned long long)a6 preScene:(unsigned long long)a7 sceneNote:(id)a8;
- (void).cxx_destruct;

@end
