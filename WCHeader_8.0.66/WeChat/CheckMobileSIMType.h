@class NSString, NSTimer;

@interface CheckMobileSIMType : MMUserService <CNetworkStatusExt, MMServiceProtocol, MMKernelExt, PBMessageObserverDelegate> {
    BOOL hasGetSimType;
    unsigned int businessFlag;
    unsigned int productType;
    unsigned int simType;
    unsigned long long lastCheckMobileSIMTypeTime;
    unsigned long long cacheExpiredTime;
    NSTimer *timer;
    NSString *simCardIp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)voIPMobileSIMType;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onAuthOK;
- (int)GetSIMType:(int)a0;
- (int)GetWKType;
- (BOOL)ParseSIMType:(int)a0 flag:(unsigned int)a1;
- (void)Check:(int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)GetIDFV;
- (id)getIPAddress;
- (id)getIPAddresses;
- (BOOL)MayBeUnicomNetwork;
- (void)NotifySimTypeChange:(unsigned int)a0 reason:(int)a1;
- (void)NotifyWKTypeChange:(unsigned int)a0 reason:(int)a1;
- (void)autoUpdate;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onSimCardNetTypeChange;
- (void).cxx_destruct;

@end
