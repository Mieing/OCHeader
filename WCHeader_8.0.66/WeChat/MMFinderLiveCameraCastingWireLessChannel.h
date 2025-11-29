@class MMFinderGCDAsyncSocket, NSString, NSObject;
@protocol OS_dispatch_queue, MMFinderLiveCameraCastingWireLessChannelDelegate;

@interface MMFinderLiveCameraCastingWireLessChannel : NSObject <GCDAsyncSocketDelegate>

@property (retain, nonatomic) MMFinderGCDAsyncSocket *socket;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL connected;
@property (weak, nonatomic) id<MMFinderLiveCameraCastingWireLessChannelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)MagicHeadData;

- (void)connectOnPort:(id)a0 port:(unsigned short)a1;
- (void)setUpSocketOnPort:(id)a0 port:(unsigned short)a1;
- (void)disconnect;
- (void)sendData:(id)a0;
- (void)socket:(id)a0 didConnectToUrl:(id)a1;
- (void)socket:(id)a0 didConnectToHost:(id)a1 port:(unsigned short)a2;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)socket:(id)a0 didReadPartialDataOfLength:(unsigned long long)a1 tag:(long long)a2;
- (void)readDataToData;
- (void)readDataToLength:(unsigned long long)a0 withTimeout:(double)a1;
- (long long)convertFromSocketError:(long long)a0;
- (void).cxx_destruct;

@end
