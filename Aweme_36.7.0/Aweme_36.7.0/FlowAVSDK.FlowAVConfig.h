@class NSString;

@interface FlowAVSDK.FlowAVConfig : NSObject {
    void /* function */ appId;
    void /* unknown type, empty encoding */ rtcEnv;
    void /* function */ customIP;
}

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *customIP;
@property (nonatomic) long long connectLostTimeout;
@property (nonatomic) long long timeoutInterrupt;
@property (nonatomic) long long vadReport;
@property (nonatomic) BOOL enableRTC;
@property (nonatomic) BOOL newArch;
@property (nonatomic) BOOL enableBurst;
@property (nonatomic) BOOL enableNewConnect;
@property (nonatomic) BOOL highActiveUser;

- (void).cxx_destruct;
- (id)init;

@end
