@class IESLiveLinkVideoFrame;
@protocol IESLiveLinkLiveCore;

@interface IESLiveLinkRenderFilterNode : IESLiveLinkFilterNode {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) id<IESLiveLinkLiveCore> liveCoreClient;
@property (retain, nonatomic) IESLiveLinkVideoFrame *videoFrame;

- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1 extra:(id)a2;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 extra:(id)a2;
- (id)initWithLiveCore:(id)a0 identifier:(id)a1;
- (void)setRenderFilterCallback;
- (void)processedFrameReady:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
