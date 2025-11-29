@class IESLiveLinkRTCEngineManager, IESLiveLinkRTCRoomManager, ByteRTCRoomEx, IESLiveLinkVideoParamsManager, ByteRTCEngineEx, IESLiveLinkRTCInteractQosInfo, NSString;
@protocol IESLiveLinkBizFilterProtocol, IESLiveLinkVideoManagerDataSource, IESLiveLinkVideoManagerDelegate, IESLiveLinkReporterProtocol;

@interface IESLiveLinkVideoManager : NSObject <ByteRTCEngineDelegate, ByteRTCEngineDelegateEx, ByteRTCRoomDelegate, ByteRTCRoomDelegateEx, IESLiveLinkRTCRoomManagerObserver, IESLiveLinkVideo>

@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (weak, nonatomic) IESLiveLinkRTCRoomManager *roomManager;
@property (weak, nonatomic) IESLiveLinkVideoParamsManager *videoParamsManager;
@property (weak, nonatomic) ByteRTCEngineEx *byteRTCEngine;
@property (weak, nonatomic) ByteRTCRoomEx *roomEx;
@property (retain, nonatomic) IESLiveLinkRTCInteractQosInfo *qosInfo;
@property (weak, nonatomic) id<IESLiveLinkVideoManagerDelegate> delegate;
@property (weak, nonatomic) id<IESLiveLinkVideoManagerDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveLinkBizFilterProtocol> bizFilter;
@property (weak, nonatomic) id<IESLiveLinkReporterProtocol> liveLinkReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)muteLocalVideoStream:(BOOL)a0;
- (int)muteRemoteVideoStream:(id)a0 mute:(BOOL)a1;
- (int)muteAllRemoteVideoStreams:(BOOL)a0;
- (void)enableVideoCapture:(BOOL)a0;
- (void)setRemoteVideoConfig:(id)a0 width:(long long)a1 height:(long long)a2 frameRate:(long long)a3;
- (void)pushEncodeVideoData:(long long)a0 timestampDtsUs:(long long)a1 data:(id)a2 width:(double)a3 height:(double)a4 videoFrameType:(long long)a5 liveStreamVideoCodec:(long long)a6;
- (int)enableLocalVideo:(BOOL)a0;
- (void)enableCapturePtsOptimize:(BOOL)a0;
- (id)initWithEngineManager:(id)a0 roomManager:(id)a1 videoParamsManager:(id)a2;
- (void)updateUserPublishStream:(id)a0 type:(unsigned long long)a1;
- (void)updateUserUnpublishStream:(id)a0 type:(unsigned long long)a1;
- (void)updateLocalStreamStats:(id)a0;
- (void)updateRemoteStreamStats:(id)a0;
- (BOOL)isAuxRoom:(id)a0;
- (void)onRoomCreated:(id)a0 result:(BOOL)a1;
- (void)onRoomWillDestroy:(id)a0;
- (void)onRoomDidDestroy:(id)a0;
- (void)setVideoSourceType:(long long)a0;
- (void)rtcEngine:(id)a0 onFirstRemoteVideoFrameDecoded:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onLocalStreamStats:(long long)a1 stats:(id)a2;
- (void)rtcEngine:(id)a0 onRemoteStreamStats:(id)a1 stats:(id)a2;
- (void)rtcEngine:(id)a0 onRemoteVideoSizeChanged:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onUserStartVideoCapture:(id)a1 uid:(id)a2;
- (void)rtcEngine:(id)a0 onUserStopVideoCapture:(id)a1 uid:(id)a2;
- (void)rtcRoom:(id)a0 onLocalStreamStats:(id)a1;
- (void)rtcRoom:(id)a0 onRemoteStreamStats:(id)a1;
- (void)rtcRoom:(id)a0 onUserPublishStream:(id)a1 isScreen:(BOOL)a2 mediaStreamType:(unsigned long long)a3;
- (void)rtcRoom:(id)a0 onUserPublishStreamVideo:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void)rtcRoom:(id)a0 onUserUnpublishStream:(id)a1 mediaStreamType:(unsigned long long)a2 reason:(long long)a3;
- (void)rtcRoom:(id)a0 onVideoPublishStateChanged:(id)a1 userId:(id)a2 state:(long long)a3 reason:(long long)a4;
- (int)setRemoteVideoSuperResolution:(id)a0 withMode:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
