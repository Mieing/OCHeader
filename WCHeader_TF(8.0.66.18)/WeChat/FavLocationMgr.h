@class NSString, FavLocationDB;

@interface FavLocationMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    BOOL _isRunningReverse;
    FavLocationDB *_locationDB;
}

@property (nonatomic) unsigned int eventID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)initData;
- (void)onServiceClearData;
- (id)getAddressByLocation:(id)a0;
- (unsigned int)updateAddressByLocation:(id)a0;
- (id)countryFromAddressDic:(id)a0;
- (id)cityFromAddressDic:(id)a0;
- (unsigned int)requestWXGeocodeWithLocation:(id)a0;
- (void)clearLocationCache;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
