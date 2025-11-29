@class NSString;

@interface AWEBatManModuleService : HTSService <AWEBatManModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareToImWithPhoto:(id)a0 completion:(id /* block */)a1;
- (void)shareToImWithBatManBusinessModel:(id)a0 shareSchema:(id)a1 completion:(id /* block */)a2;
- (void)addToDesktopWithBatManBusinessModel:(id)a0 addDesktopSchema:(id)a1 completion:(id /* block */)a2;
- (void)queryBatManCollectWithBatManBusinessModel:(id)a0 completion:(id /* block */)a1;
- (void)updateBatManCollectWithBatManBusinessModel:(id)a0 state:(BOOL)a1 completion:(id /* block */)a2;
- (void)registerAlertTrackerDelegateWithContext:(id)a0;

@end
