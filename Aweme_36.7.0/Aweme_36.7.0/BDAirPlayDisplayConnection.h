@class UIScreen, UIWindow, BDAirPlayDevice, NSString;
@protocol BDAirPlayDisplayConnectionDelegate;

@interface BDAirPlayDisplayConnection : NSObject <BDByteCastConnectionProtocol>

@property (retain, nonatomic) UIScreen *secondScreen;
@property (nonatomic) BOOL intendToConnect;
@property (retain, nonatomic) BDAirPlayDevice *airPlayDevice;
@property (nonatomic) BOOL isConnected;
@property (retain, nonatomic) UIWindow *secondWindow;
@property (weak, nonatomic) id<BDAirPlayDisplayConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disConnect;
- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (BOOL)updateStateForceNotifying:(BOOL)a0;
- (void).cxx_destruct;
- (void)connect;
- (void)updateState;
- (void)dealloc;

@end
