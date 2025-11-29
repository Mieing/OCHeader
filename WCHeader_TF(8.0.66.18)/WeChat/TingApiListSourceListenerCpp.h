@class NSString;

@interface TingApiListSourceListenerCpp : UnitRCObjcBaseProxyClass <TingApiListSourceListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayTaskServiceTingItemUpdated:(id)a0 newItem:(id)a1;
- (void)onPlayTaskServiceTapeItemUpdated:(id)a0;
- (void)onReloadItems:(id)a0;
- (void)onLoadMoreWithDirection:(id)a0 direction:(int)a1;
- (void)onLoadError:(int)a0 reload:(BOOL)a1 errorCode:(int)a2 errorMessage:(id)a3;
- (void)onLoadingStatusChanged:(int)a0 loading:(BOOL)a1;
- (void)onPlayTaskServiceRefresh:(id)a0;

@end
