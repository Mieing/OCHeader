@class MMFinderReplayKitVideoDecoder, MMFinderGCDAsyncSocket, NSString, NSObject, WCLocalSocketServer;
@protocol OS_dispatch_queue, MMFinderLiveReplayKitManagerDelegate;

@interface WCReplayKitApp : NSObject <WCLocalSocketServerDelegate, MMFinderReplayKitVideoDecoderDelegate>

@property (nonatomic) struct { void *x0; int x1; int x2; int x3; int x4; BOOL x5; } *recvBuffer;
@property (retain, nonatomic) MMFinderReplayKitVideoDecoder *videoDecode;
@property (nonatomic) struct { unsigned int serviceIndex; unsigned int fps; unsigned int transportType; unsigned int videoType; unsigned int pausedByMainApp; unsigned int orientation; unsigned int rcLimit; } config;
@property (nonatomic) struct { int type; int state; long long size; int transportType; float curMem; long long videoFrameCount; float videoFrameWidth; float videoFrameHeight; int videoFrameType; } header;
@property BOOL pausedByMainApp;
@property int videoType;
@property int serviceConfigIndex;
@property long long orientation;
@property (nonatomic) unsigned short fps;
@property (nonatomic) unsigned short rcLimit;
@property (retain, nonatomic) WCLocalSocketServer *socketServer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyzeQueue;
@property (retain, nonatomic) MMFinderGCDAsyncSocket *currentSocket;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handleDataQueue;
@property (weak, nonatomic) id<MMFinderLiveReplayKitManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL serviceSocketSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)startRecordLive;
- (void)stopSocket;
- (void)stopRecordLive;
- (void)cleanDataWhileClientSotp;
- (void)didReadDataError:(id)a0;
- (void)socket:(id)a0 didReadData:(id)a1;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)socketDidCloseReadStream:(id)a0;
- (void)socket:(id)a0 didAcceptNewSocket:(id)a1;
- (void)handleRecvBuffer:(unsigned long long)a0 dataLen:(unsigned long long)a1 videoFrameId:(long long)a2 videoFrameWidth:(unsigned int)a3 videoFrameHeight:(unsigned int)a4 videoFrameType:(unsigned int)a5;
- (void)onRecvVideoData:(id)a0;
- (void)onRecvH264VideoData:(id)a0 videoFrameId:(long long)a1 videoFrameWidth:(unsigned int)a2 videoFrameHeight:(unsigned int)a3 videoFrameType:(unsigned int)a4;
- (void)onDecoderPixelBuffer:(struct __CVBuffer { } *)a0 videoFrameId:(long long)a1;
- (void)updateConfig;
- (void)setUpConfig;
- (void)sendConfig;
- (id)configData;
- (id)dictionaryToJson:(id)a0;
- (BOOL)hasConfig:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })a0;
- (void)updatePausedByMainApp:(unsigned short)a0;
- (void)updateVideoType:(unsigned short)a0;
- (void)updateOrientation:(unsigned short)a0;
- (void)updateConfigWithPausedByMainApp:(unsigned short)a0 videoType:(unsigned short)a1 orientation:(unsigned short)a2 fps:(unsigned short)a3 rcLimit:(unsigned short)a4;
- (BOOL)isServiceSocketSuccess;
- (void)resetHeader;
- (void)showLogErrorString:(id)a0;
- (void).cxx_destruct;

@end
