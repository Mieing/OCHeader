@class NSString;

@interface WeAppCore.WACDPContext : NSObject {
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ waitWebViewDidAppear;
    void /* unknown type, empty encoding */ webViewDidAppearHandler;
    void /* unknown type, empty encoding */ weAppLaunchHandler;
}

@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, retain) void /* unknown type, empty encoding */ appIdStack;
@property (nonatomic, retain) void /* unknown type, empty encoding */ lastScreenshotImage;
@property (nonatomic) void /* unknown type, empty encoding */ endState;
@property (nonatomic) void /* unknown type, empty encoding */ waitWeAppLaunch;

- (void)onWeAppLaunch:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
