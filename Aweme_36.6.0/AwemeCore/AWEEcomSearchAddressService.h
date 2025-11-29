@class NSString, NSMutableDictionary;

@interface AWEEcomSearchAddressService : HTSService <HTSService, AWEEcomSearchAddressService>

@property (retain, nonatomic) NSMutableDictionary *addressInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)addressInfoWithIdentifier:(id)a0;
- (void)updateAddressInfo:(id)a0 withIdentifier:(id)a1;
- (void)removeAddressInfoWithIdentifier:(id)a0;
- (id)getDefaultAddressParamsWithController:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
