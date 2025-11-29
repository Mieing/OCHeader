@class NSString;

@interface WAPreDownloadReport : MMUserService <MMServiceProtocol> {
    NSString *_appID;
    unsigned long long _appVersion;
    unsigned int _appType;
    unsigned int _appState;
    NSString *_instanceId;
    unsigned int _isPreload;
    BOOL _isDownloadedCode;
    unsigned int _scene;
    unsigned int _hasSplashScreen;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
