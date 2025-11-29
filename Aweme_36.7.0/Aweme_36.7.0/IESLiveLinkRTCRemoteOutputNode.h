@class IESLiveLinkRTCEngineManager, NSMutableDictionary, NSString;
@protocol IESLiveLinkRTCRemoteOutputNodeDelegate, IESLiveLinkRTCRemoteOutputNodeDataSource;

@interface IESLiveLinkRTCRemoteOutputNode : IESLiveLinkOutputNode <IESLiveLinkRTCRemoteVideoSinkDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (nonatomic) BOOL enableVideoFrameCallbackOptimize;
@property (retain, nonatomic) NSMutableDictionary *videoSinkMap;
@property (weak, nonatomic) id<IESLiveLinkRTCRemoteOutputNodeDelegate> delegate;
@property (weak, nonatomic) id<IESLiveLinkRTCRemoteOutputNodeDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)expectedFrameIndex;
- (id)initWithEngineManager:(id)a0 identifier:(id)a1;
- (void)removeAllVideoFrameOutput;
- (void)addVideoFrameOutput:(id)a0 userID:(id)a1;
- (void)removeVideoFrameOutput:(id)a0 userID:(id)a1;
- (void)onFrame:(id)a0 userID:(id)a1 roomID:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
