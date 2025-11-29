@class BDByteCastPlayer, NSString, BDByteCastConnection, BDByteCastBrowser;
@protocol IESLiveRoomService;

@interface AWELivePadCastServiceImpl : NSObject <BDByteCastBrowserDelegate, BDByteCastConnectionDelegate, BDByteCastPlayerDelegate, IESLivePadCastService>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long timeLimit;
@property (retain, nonatomic) BDByteCastBrowser *browser;
@property (nonatomic) BOOL isSearching;
@property (copy, nonatomic) id /* block */ timeoutTask;
@property (copy, nonatomic) id /* block */ padUpdateBlock;
@property (retain, nonatomic) BDByteCastConnection *connection;
@property (copy, nonatomic) id /* block */ connectCallback;
@property (retain, nonatomic) BDByteCastPlayer *byteCastPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_createDeviceWithData:(id)a0;
- (BOOL)checkBeforeSendMessageWithDevice:(id)a0 callback:(id /* block */)a1;
- (id)padPushSchema:(id)a0;
- (id)padLoginSchemaWithExtraInfo:(id)a0;
- (void)byteCastBrowser:(id)a0 onError:(id)a1;
- (void)byteCastBrowser:(id)a0 didFindByteCastServices:(id)a1;
- (void)byteCastConnection:(id)a0 didConnectToService:(id)a1 extraInfo:(id)a2;
- (void)byteCastConnection:(id)a0 sdkType:(unsigned long long)a1 onError:(id)a2;
- (void)setupWithRoom:(id)a0 timeLimit:(long long)a1;
- (void)startFetchPadListWithUpdateBlock:(id /* block */)a0;
- (void)startConnectToPadDevice:(id)a0 callback:(id /* block */)a1;
- (void)startPushToPadDevice:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)startLoginToPadDevice:(id)a0 extraInfo:(id)a1 callback:(id /* block */)a2;
- (void)beginDiscoverDevice;
- (void)stopDiscoverDevice;
- (BOOL)hasPadFound;
- (void).cxx_destruct;
- (void)clear;
- (void)clearConnection;
- (void)dealloc;

@end
