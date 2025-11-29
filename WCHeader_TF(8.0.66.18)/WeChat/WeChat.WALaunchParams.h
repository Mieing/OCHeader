@class NSString;

@interface WeChat.WALaunchParams : NSObject {
    void /* unknown type, empty encoding */ username;
    void /* unknown type, empty encoding */ appid;
    void /* unknown type, empty encoding */ pagePath;
    void /* unknown type, empty encoding */ sceneNote;
    void /* unknown type, empty encoding */ userScriptReadyCallback;
    void /* unknown type, empty encoding */ wxConfigReadyCallback;
}

@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *pagePath;
@property (nonatomic) void /* unknown type, empty encoding */ appVersion;
@property (nonatomic) void /* unknown type, empty encoding */ debugMode;
@property (nonatomic) void /* unknown type, empty encoding */ scene;
@property (nonatomic, copy) NSString *sceneNote;
@property (nonatomic, copy) id /* block */ userScriptReadyCallback;
@property (nonatomic, copy) id /* block */ wxConfigReadyCallback;

- (id)init;
- (void)registerUserScriptReadyCallbackWithCallback:(id /* block */)a0;
- (void)registerWxConfigReadyCallbackWithCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
