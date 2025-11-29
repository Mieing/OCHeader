@class NSString, NSDictionary;

@interface WeAppCore.WACDPCommand_Base : NSObject {
    void /* unknown type, empty encoding */ method;
    void /* unknown type, empty encoding */ callId;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ commandTask;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ cdpContext;
    void /* unknown type, empty encoding */ isRerunCommand;
    void /* unknown type, empty encoding */ callbackId;
    void /* unknown type, empty encoding */ eventParams;
    void /* unknown type, empty encoding */ startTimeStamp;
    void /* unknown type, empty encoding */ waitWeAppLaunchCost;
    void /* unknown type, empty encoding */ agentUsername;
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ cmdId;
    void /* unknown type, empty encoding */ response;
}

@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) NSString *callId;
@property (nonatomic, retain) void /* unknown type, empty encoding */ context;
@property (nonatomic, copy) NSDictionary *params;
@property (nonatomic) void /* unknown type, empty encoding */ recvCdpTimeStamp;
@property (nonatomic, copy) NSString *agentUsername;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *cmdId;
@property (nonatomic, copy) NSString *response;
@property (nonatomic) void /* unknown type, empty encoding */ code;
@property (nonatomic, readonly) NSString *taskId;
@property (nonatomic, readonly) long long hash;

+ (id)makeCommandWithMethod:(id)a0;

- (void)runCommandWithCompletionHandler:(void (^)(BOOL))a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
