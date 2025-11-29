@class NSDictionary, NSArray;

@interface AWEPOIBTMChannelNetworkHeaderHelper : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _syncSettingsLock;
}

@property (class, readonly) AWEPOIBTMChannelNetworkHeaderHelper *shared;

@property (copy, nonatomic) NSDictionary *lifeBtmChannelConfig;
@property (readonly, nonatomic) BOOL lifeBtmChannelSwitch;
@property (readonly, nonatomic) BOOL lifeBtmWithShowId;
@property (readonly, nonatomic) long long lifeBtmChainMaxNodeCount;
@property (readonly, copy, nonatomic) NSArray *lifeBtmAllowList;
@property (readonly, copy, nonatomic) NSArray *lifeBtmPageFields;
@property (readonly, copy, nonatomic) NSArray *lifeBtmUnitFields;
@property (readonly, copy, nonatomic) NSDictionary *lifeBtmCurrentBtm;
@property (copy) NSDictionary *cacheBcmChain;

- (id)zipBTMChannelWithRequestPath:(id)a0 header:(id)a1;
- (BOOL)isBTMAbcd:(id)a0;
- (id)getBtmAB:(id)a0;
- (void)observeChainDidChanged;
- (id)zipBTMChannelWithRequest:(id)a0;
- (void)addInterceptWithRequest:(id)a0;
- (void)syncSettings;
- (void).cxx_destruct;
- (void)setupConfig;

@end
