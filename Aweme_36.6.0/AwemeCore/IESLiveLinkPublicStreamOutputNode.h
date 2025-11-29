@class IESLiveLinkRTCEngineManager, NSMutableDictionary, NSString;

@interface IESLiveLinkPublicStreamOutputNode : IESLiveLinkOutputNode <IESLiveLinkPublicStreamVideoSinkDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (retain, nonatomic) NSMutableDictionary *videoSinkMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)expectedFrameIndex;
- (id)initWithEngineManager:(id)a0 identifier:(id)a1;
- (int)addPublicStreamVideoFrameOutput:(id)a0 pixelFormat:(long long)a1;
- (int)removePublicStreamVideoFrameOutput:(id)a0 pixelFormat:(long long)a1;
- (void)onFrame:(id)a0 publicStreamID:(id)a1;
- (void)removeAllPublicStreamVideoFrameOutput;
- (void).cxx_destruct;
- (void)dealloc;

@end
