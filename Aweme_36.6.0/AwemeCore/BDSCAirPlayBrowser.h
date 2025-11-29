@class NSString;
@protocol BDSCDeviceBrowserDelegate, BDSCDeviceProtocol;

@interface BDSCAirPlayBrowser : NSObject <BDSCDeviceBrowserProtocol>

@property (retain, nonatomic) id<BDSCDeviceProtocol> airPlayDevice;
@property (retain, nonatomic) id<BDSCDeviceProtocol> airPlayMirrorDevice;
@property (nonatomic) BOOL isPreSearching;
@property (weak, nonatomic) id<BDSCDeviceBrowserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)browser;

- (void)stopSearch;
- (void)startSearch;
- (unsigned long long)searchDeviceSource;
- (void).cxx_destruct;
- (void)resetData;

@end
