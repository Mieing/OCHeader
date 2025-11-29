@class OpenVoiceVideoRender, NSObject;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceVideoRender : MMOpenVoiceVideoBase {
    unsigned int frameCount;
}

@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) OpenVoiceVideoRender *videoRender;
@property (nonatomic) int objectFit;
@property (nonatomic) int rotation;
@property (nonatomic) BOOL notifyFirstFrame;
@property (nonatomic) long long lastOrientation;

- (id)init;
- (void)dealloc;
- (int)initView:(int)a0 openId:(id)a1 dic:(id)a2 queue:(id)a3;
- (int)updateView:(int)a0 dic:(id)a1;
- (void)fpsTimerCheck;
- (void)render:(char *)a0 dataLen:(int)a1 width:(int)a2 height:(int)a3 rotation:(int)a4;
- (void).cxx_destruct;

@end
