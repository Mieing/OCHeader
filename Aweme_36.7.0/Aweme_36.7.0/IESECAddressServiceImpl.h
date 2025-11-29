@class IESECAddressServiceConfig, IESECAddressResultItem, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;
@protocol HTSKVStore;

@interface IESECAddressServiceImpl : NSObject <IESECAddressService, IESECUserMessage, PuzzleKitViewLifeCycleProtocol>

@property (retain, nonatomic) IESECAddressServiceConfig *config;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (nonatomic) BOOL hasFirstLocated;
@property (nonatomic) BOOL hasFirstFetch;
@property (nonatomic) long long lastTimeNoGpsRequestTime;
@property (nonatomic) long long lastFrontChangeTime;
@property (nonatomic) double lastLocationLongitude;
@property (nonatomic) double lastLocationLatitude;
@property (retain, nonatomic) IESECAddressResultItem *instanceAddressItem;
@property (retain, nonatomic) NSMutableArray *otherAddressList;
@property (copy, nonatomic) NSDictionary *globalAddress;
@property (copy, nonatomic) NSDictionary *latestAddress;
@property (copy, nonatomic) NSDictionary *sessionAddress;
@property (retain, nonatomic) NSMutableDictionary *clearSessionAddressMap;
@property (retain, nonatomic) NSMutableDictionary *toastAddressMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAddressWithBtmHost:(id)a0 curPageBtm:(id)a1 addressType:(long long)a2;
+ (id)addEcAddressDataInSchema:(id)a0;
+ (id)getAddressUpdateDialogConfig;
+ (void)setAddress:(id)a0 sourceType:(unsigned long long)a1 isSession:(BOOL)a2 extraParams:(id)a3 completion:(id /* block */)a4;
+ (void)showAddressUpdateDialog:(id)a0;
+ (void)updateAddress:(id)a0 action:(id)a1 completion:(id /* block */)a2;
+ (void)insertAddressInfoWithKitView:(id)a0 context:(id)a1;
+ (id)getHostDefaultBtm:(id)a0;
+ (BOOL)exprimentSwitchOn;
+ (id)shared;

- (id)addEcAddressDataInSchema:(id)a0;
- (id)getAddressUpdateDialogConfig;
- (void)setAddress:(id)a0 sourceType:(unsigned long long)a1 isSession:(BOOL)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)showAddressUpdateDialog:(id)a0;
- (void)updateAddress:(id)a0 action:(id)a1 completion:(id /* block */)a2;
- (void)insertAddressInfoWithKitView:(id)a0 context:(id)a1;
- (void)handleAPPWillEnterForeground:(id)a0;
- (void)didFinishHostLogin;
- (void)didFinishHostLogout;
- (BOOL)useVirtualStack;
- (id)getAddress:(id)a0 curPageBtm:(id)a1 addressType:(long long)a2;
- (id)getAddressPageBtmCode:(id)a0;
- (void)registerJSB;
- (void)fetchCurrentAddressWithChangeType:(unsigned long long)a0 address:(id)a1;
- (BOOL)isValidAddress:(id)a0;
- (BOOL)isSameAddress:(id)a0 anotherAddress:(id)a1;
- (long long)getVirtualStackMaxSize;
- (id)buildAddressModelWithAddress:(id)a0 host:(id)a1;
- (void)buildVirtualStack:(id)a0 btm:(id)a1;
- (void)updateAddressCycleWithAddressModel:(id)a0 curBTM:(id)a1;
- (void)reportLastestAddress;
- (BOOL)addressModelIsExpired:(id)a0;
- (id)mergeExtra:(id)a0 intoAddress:(id)a1;
- (id)buildCurrentReportAddressInfo:(id)a0;
- (void)publishUpdateAddress:(id)a0;
- (void)updateAddressWithAddressModel:(id)a0 curBTM:(id)a1;
- (BOOL)useDeFaultLocation;
- (double)caculateDistancelong1:(double)a0 lat1:(double)a1 long2:(double)a2 lat2:(double)a3;
- (id)getLocationFromAddressModel:(id)a0;
- (void)toastAddressWithAddress:(id)a0 curBTM:(id)a1 offsetDistance:(double)a2;
- (id)buildCurrentAddressInfo:(id)a0 isGlobalAddress:(BOOL)a1;
- (void)handleResponseAddress:(id)a0 changeType:(unsigned long long)a1;
- (id)findInstanceAddress:(id)a0;
- (void)publishToastAddress:(id)a0 btm:(id)a1;
- (double)rad:(double)a0;
- (id)initPrivate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupListener;

@end
