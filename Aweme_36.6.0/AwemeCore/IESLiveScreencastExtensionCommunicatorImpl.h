@class NSString, HMDThreadSafeDictionary, HTSEventContext, IESLiveLocalSocketServer;
@protocol IESLiveMonitor;

@interface IESLiveScreencastExtensionCommunicatorImpl : NSObject <IESLiveLocalSocketDelegate, IESLiveRoomExtensionCommunicator>

@property (retain, nonatomic) IESLiveLocalSocketServer *serverSocket;
@property (retain, nonatomic) HMDThreadSafeDictionary *listenerMap;
@property (nonatomic) unsigned char messageSerialId;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) BOOL closeByHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSEventContext *eventContext;

- (void)localSocket:(id)a0 didReceiveData:(id)a1 head:(struct { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })a2;
- (void)localSocket:(id)a0 didDisconnectedWithReason:(long long)a1;
- (void)localSocket:(id)a0 reportTrackWithStatus:(long long)a1 extra:(id)a2;
- (void)closeConnect;
- (void)setupCommunicateCarrier;
- (id)messageDataWithMessage:(id)a0 key:(long long)a1;
- (void)addListener:(id)a0 forKey:(id)a1;
- (BOOL)handleListenMessageWithKey:(id)a0 messageInfo:(id)a1;
- (void)passMessage:(id)a0 forKey:(long long)a1;
- (void)listenMessageWithKey:(long long)a0 handler:(id /* block */)a1;
- (void)listenEncodedVideoDataFromExtension:(id /* block */)a0;
- (void)listenAppAudioDataFromExtension:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
