@interface WeChat.WARuntime : NSObject {
    void /* unknown type, empty encoding */ launchParams;
    void /* unknown type, empty encoding */ username;
    void /* unknown type, empty encoding */ appid;
    void /* unknown type, empty encoding */ instanceId;
    void /* unknown type, empty encoding */ targetVersion;
    void /* unknown type, empty encoding */ debugMode;
    void /* unknown type, empty encoding */ runtimeMode;
    void /* unknown type, empty encoding */ versionRouter;
    void /* unknown type, empty encoding */ runtimeVersion;
    void /* unknown type, empty encoding */ permission;
    void /* unknown type, empty encoding */ coldLaunchRuntimeLoader;
    void /* unknown type, empty encoding */ warmLaunchRuntimeLoader;
    void /* unknown type, empty encoding */ modeObj;
    void /* unknown type, empty encoding */ contact;
}

- (id)init;
- (BOOL)checkJSApiPermission:(id)a0;
- (void).cxx_destruct;

@end
