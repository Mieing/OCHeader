@class BDAirPlayDevice;
@protocol BDAirPlayBrowserDelegate;

@interface BDAirPlayBrowser : NSObject

@property (nonatomic) BOOL isBrowsing;
@property (nonatomic) long long browsingTypes;
@property (retain, nonatomic) BDAirPlayDevice *airPlayDevice;
@property (retain, nonatomic) BDAirPlayDevice *airPlayMirrorDevice;
@property (weak, nonatomic) id<BDAirPlayBrowserDelegate> delegate;

- (id)initWithContextId:(id)a0;
- (void)startBrowsingWithTypes:(long long)a0;
- (id)airPlayDisplayDevice;
- (void)notifyDeviceRemoved:(id)a0;
- (void).cxx_destruct;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)notifyDeviceListChanged;

@end
