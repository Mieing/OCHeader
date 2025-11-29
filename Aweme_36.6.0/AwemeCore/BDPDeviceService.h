@class NSString, NSMutableDictionary, BDPMultiDelegateProxy;
@protocol BDPUserScreenRecordDelegate;

@interface BDPDeviceService : NSObject <BDPDeviceService>

@property (retain, nonatomic) NSMutableDictionary *shouldDisableUserScreenRecordDict;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPUserScreenRecordDelegate> *delegates;
@property (retain, nonatomic) BDPMultiDelegateProxy *players;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)enableUserScreenRecord;
- (void)disableUserScreenRecord;
- (BOOL)shouldDisableUserScreenRecordForUniqueID:(id)a0;
- (void)setShouldDisableUserScreenRecordForUniqueID:(id)a0 shouldDisable:(BOOL)a1;
- (void).cxx_destruct;

@end
