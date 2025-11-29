@class IESLiveLinkRTCEngineManager, IESLiveLinkVideoFrame, NSString, IESLiveLinkRTCInteractQosInfo;
@protocol IESLiveLinkRTCPushNodeDataSource;

@interface IESLiveLinkRTCPushNode : IESLiveLinkBaseNode <IESLiveLinkInputNode> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) id<IESLiveLinkRTCPushNodeDataSource> dataSource;
@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (retain, nonatomic) IESLiveLinkVideoFrame *videoFrame;
@property (retain, nonatomic) IESLiveLinkRTCInteractQosInfo *qosInfo;
@property (nonatomic) long long pushStreamWidth;
@property (nonatomic) long long pushStreamHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (id)getQosInfo;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1 extra:(id)a2;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1 extra:(id)a2;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 extra:(id)a2;
- (long long)nextAvailableFrameIndex;
- (BOOL)ignoreRemoveAllTargets;
- (id)initWithEngineManager:(id)a0 dataSource:(id)a1 identifier:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
