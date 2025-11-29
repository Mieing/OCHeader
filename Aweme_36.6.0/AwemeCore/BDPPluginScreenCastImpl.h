@class NSTimer, BDByteCastConnection, BDPScreenCastDeviceModel, NSString, BDPUniqueID, BDByteCastKit, BDByteCastPlayer, BDByteCastBrowser;
@protocol BDPScreenCastDelegate;

@interface BDPPluginScreenCastImpl : NSObject <BDPScreenCastPluginDelegate, BDByteCastBrowserDelegate, BDByteCastConnectionDelegate, BDByteCastPlayerDelegate>

@property (retain, nonatomic) BDByteCastBrowser *byteCastBrowser;
@property (retain, nonatomic) BDByteCastConnection *byteCastConnection;
@property (retain, nonatomic) BDByteCastPlayer *byteCastPlayer;
@property (weak, nonatomic) id<BDPScreenCastDelegate> delegate;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) BDPScreenCastDeviceModel *connectedDevice;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDByteCastKit *byteCastKit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)byteCastBrowser:(id)a0 didFindByteCastServices:(id)a1;
- (void)byteCastConnection:(id)a0 onError:(id)a1;
- (void)byteCastConnection:(id)a0 didConnectToService:(id)a1;
- (void)byteCastPlayer:(id)a0 onError:(id)a1;
- (void)byteCastPlayer:(id)a0 playStatus:(unsigned long long)a1;
- (void)byteCastPlayer:(id)a0 progressInfo:(id)a1;
- (void)byteCastPlayer:(id)a0 onErrorWithErrorCode:(unsigned long long)a1;
- (void)bdp_setDelegate:(id)a0;
- (void)bdp_registerScreenCast;
- (void)bdp_setUniqueID:(id)a0;
- (void)bdp_stopSearchingCastDevice;
- (void)connectToCastDevice:(id)a0;
- (void)bdp_searchCastDeviceWithTimeout:(unsigned long long)a0;
- (void)bdp_castStop;
- (void)bdp_resumePlay;
- (void)bdp_castPause;
- (void)bdp_castSeekTo:(double)a0;
- (void)bdp_castPlayWithItem:(id)a0;
- (id)createByteCastBrowser;
- (void)callbackWithErrorCode:(long long)a0 errorMsg:(id)a1;
- (void)bdp_disconnectCastingDevice;
- (void).cxx_destruct;
- (void)timeout;

@end
