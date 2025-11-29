@class NSString;
@protocol BDReaderManagerDelegate;

@interface BDReaderManager : NSObject

@property (weak, nonatomic) id<BDReaderManagerDelegate> managerDelegate;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long sdkVersion;
@property (nonatomic) double fps;

+ (id)BDReaderPath;
+ (id)shareInstance;

- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (id)BDReaderVersion;
- (void)observeFPS;
- (void)log:(int)a0 module:(const char *)a1 func:(const char *)a2 content:(id)a3;
- (void)onEvent:(id)a0 params:(id)a1;
- (void)trackPerfService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)enterScence:(id)a0 sceneType:(unsigned long long)a1;
- (void)leaveScence:(id)a0 sceneType:(unsigned long long)a1;
- (void)onError:(id)a0 params:(id)a1;
- (id)monitor;
- (void).cxx_destruct;

@end
