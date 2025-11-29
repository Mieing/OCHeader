@class NSString, BDCLUPnPServer, NSMutableSet, NSMutableArray, NSObject;
@protocol BDDlnaBrowserDelegate;

@interface BDDlnaBrowser : NSObject <BDCLUPnPServerDelegate>

@property (nonatomic) BOOL searchStarted;
@property (retain, nonatomic) NSMutableArray *discoveredDlnaServiceArray;
@property (retain, nonatomic) BDCLUPnPServer *upnpServer;
@property (retain, nonatomic) NSMutableArray *invalidDlnaServiceArray;
@property (retain, nonatomic) NSMutableSet *pendingBDLEServiceSet;
@property (retain, nonatomic) NSMutableArray *discoveredBDLEServiceArray;
@property (weak, nonatomic) NSObject<BDDlnaBrowserDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)a0;
- (void)searchServices:(unsigned long long)a0;
- (void)checkDeviceAlive:(long long)a0;
- (void)upnpDeviceUnavailable:(id)a0;
- (void)upnpSearchChangeWithResults:(id)a0;
- (void)upnpSearchErrorWithError:(id)a0;
- (void)addBDLEService:(id)a0;
- (void)traceBDLEError:(id)a0 message:(id)a1;
- (void)traceBDDLNABrowseError:(id)a0 message:(id)a1;
- (BOOL)addInvalidService:(id)a0;
- (void)traceBrowseResultProtocolV2:(unsigned long long)a0 deviceCount:(unsigned long long)a1;
- (void)removeUnavailableBDLEDevice:(id)a0;
- (void)removeServiceWithUPnPDevice:(id)a0;
- (void)addService:(id)a0;
- (void).cxx_destruct;
- (void)stopSearching;

@end
