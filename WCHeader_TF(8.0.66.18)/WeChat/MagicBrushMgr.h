@class NSString, MagicBrushService, NSMutableSet;

@interface MagicBrushMgr : MMUserService <IMBReportProxy, MMServiceProtocol, IMBBizInfoDelegate>

@property (retain, nonatomic) MagicBrushService *magicbrush;
@property (retain, nonatomic) NSMutableSet *activeBizsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (id)newBiz:(id)a0;
- (void)report:(int)a0 logStr:(id)a1;
- (id)getReportExtraDictionary:(id)a0 publicServices:(id)a1;
- (void)onBizCallStart:(id)a0;
- (void)onBizCallDestroy:(id)a0;
- (void)updateActiveBizs;
- (void).cxx_destruct;

@end
