@protocol IESLiveLinkLiveCore;

@interface IESLiveLinkSecondVideoCaptureOutputNode : IESLiveLinkOutputNode {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) id<IESLiveLinkLiveCore> liveCoreClient;
@property (nonatomic) long long inputFrameCount;

- (id)initWithLiveCore:(id)a0 identifier:(id)a1;
- (int)expectedFrameIndex;
- (void)setupVideoCapture;
- (void)updateTargetsForFrame:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
