@class NSString, VoIPMPSystemAuthNativeAPICallback;

@interface VoIPMPSystemAuthNativeImpl : NSObject <VoIPMPSystemAuthNativeAPIBase>

@property (retain, nonatomic) VoIPMPSystemAuthNativeAPICallback *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)requestMicrophoneAsync:(unsigned long long)a0;
- (void)requestCameraAsync:(unsigned long long)a0;
- (void)requestAsync:(unsigned long long)a0 type:(int)a1;
- (void).cxx_destruct;

@end
