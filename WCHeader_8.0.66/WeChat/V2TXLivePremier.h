@class NSString;

@interface V2TXLivePremier : NSObject <V2TXLivePremier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSDKVersionStr;
+ (void)setObserver:(id)a0;
+ (long long)setLogConfig:(id)a0;
+ (long long)setEnvironment:(const char *)a0;
+ (void)setLicence:(id)a0 key:(id)a1;
+ (long long)setSocks5Proxy:(id)a0 port:(long long)a1 username:(id)a2 password:(id)a3 config:(id)a4;
+ (long long)enableAudioCaptureObserver:(BOOL)a0 format:(id)a1;
+ (long long)enableAudioPlayoutObserver:(BOOL)a0 format:(id)a1;
+ (long long)enableVoiceEarMonitorObserver:(BOOL)a0;
+ (void)setUserId:(id)a0;
+ (long long)callExperimentalAPI:(id)a0;


@end
