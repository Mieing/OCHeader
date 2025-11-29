@protocol WXVoIPAudioHardwareDelegate;

@interface WXVoIPAudioHardwareCallbackAdapter : NSObject {
    struct unique_ptr<wxvoipsdk::audio::HardwareCallbackImpl, std::default_delete<wxvoipsdk::audio::HardwareCallbackImpl>> { struct __compressed_pair<wxvoipsdk::audio::HardwareCallbackImpl *, std::default_delete<wxvoipsdk::audio::HardwareCallbackImpl>> { struct HardwareCallbackImpl *__value_; } __ptr_; } _callbackImpl;
}

@property (weak, nonatomic) id<WXVoIPAudioHardwareDelegate> delegate;

- (id)init:(id)a0;
- (struct AudioUnitCaptureDataCallback { void /* function */ **x0; } *)getCaptureDataCallback;
- (struct AudioUnitPlayDataCallback { void /* function */ **x0; } *)getPlayDataCallback;
- (struct HardwareManagerEventCallback { void /* function */ **x0; } *)getEventCallback;
- (void)capturePortprocess:(struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; } *)a0;
- (void)getDataToPlay:(struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; } *)a0;
- (void)notifyAudioUnitEvent:(const void *)a0;
- (void)notifyAudioUnitError:(const void *)a0;
- (void)notifyInUseCaptureHardwareChangedSuccessfully:(const struct Hardware { int x0; } *)a0;
- (void)notifyInUsePlayHardwareChangedSuccessfully:(const struct Hardware { int x0; } *)a0;
- (void)notifyHardwarePluggedIn:(const struct Hardware { int x0; } *)a0;
- (void)notifyHardwarePluggedOut:(const struct Hardware { int x0; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
