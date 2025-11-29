@class NSString;

@interface CSJByteFinderManager : NSObject

@property (copy, nonatomic) NSString *applogDid;
@property (copy, nonatomic) NSString *did;
@property (nonatomic) BOOL ignoreMSDK;

+ (void)startLogsdkWithDC:(id)a0 did:(id)a1 ignoreMSDK:(BOOL)a2 host:(id)a3 initCrashModule:(BOOL)a4;
+ (void)startCrashAndAppLogSDKWithDC:(id)a0 did:(id)a1 host:(id)a2 initCrashModule:(BOOL)a3;
+ (void)startAPMWithDid:(id)a0 ignoreMSDK:(BOOL)a1 host:(id)a2;
+ (void)_signalAction;
+ (id)host_appid;
+ (id)sharedInstance;
+ (id)sdkVersion;

- (void)setupCrashAndAppLogSDKWithHost:(id)a0 initCrashModule:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
