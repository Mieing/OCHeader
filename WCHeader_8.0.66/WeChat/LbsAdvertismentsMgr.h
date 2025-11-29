@class NSString, NSMutableDictionary;

@interface LbsAdvertismentsMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *adInfos;
@property (retain, nonatomic) NSMutableDictionary *adActionInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendAdInfo:(id)a0;
- (void)showAd:(id)a0;
- (void)closeAd:(id)a0;
- (BOOL)isAdvertismentCanShow:(id)a0;
- (BOOL)isAdvertismentCanClose:(id)a0;
- (long long)logFeatureActionForAd:(id)a0 isAdClicked:(BOOL)a1;
- (void)onServiceInit;
- (void).cxx_destruct;

@end
