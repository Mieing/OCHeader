@class NSString, IESLiveLinkVideoFrame;
@protocol IESLiveLinkLiveCore;

@interface IESLiveLinkPreMixRenderNode : IESLiveLinkBaseNode <IESLiveLinkInputNode> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) id<IESLiveLinkLiveCore> liveCoreClient;
@property (retain, nonatomic) IESLiveLinkVideoFrame *videoFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1 extra:(id)a2;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1 extra:(id)a2;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 extra:(id)a2;
- (long long)nextAvailableFrameIndex;
- (BOOL)ignoreRemoveAllTargets;
- (id)initWithLiveCore:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
