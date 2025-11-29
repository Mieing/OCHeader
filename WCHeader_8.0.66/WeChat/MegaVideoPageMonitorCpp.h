@class NSString;

@interface MegaVideoPageMonitorCpp : UnitRCObjcBaseProxyClass <MegaVideoPageMonitor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onStart;
+ (void)onGlobalAction:(int)a0 pageId:(long long)a1 pageType:(int)a2 enterType:(int)a3 extra:(id)a4;
+ (void)onCommonAction:(id)a0;
+ (long long)getStartTime;
+ (id)createInstance;

- (void)init:(id)a0 startTime:(long long)a1 pageId:(long long)a2 pageType:(int)a3 enterType:(int)a4;
- (void)updateEnterType:(int)a0;
- (void)updateMaxHorizontalScrollIndex:(int)a0;
- (void)onPageStateChange:(int)a0;
- (void)onAction:(int)a0;
- (void)onViewAction:(int)a0 viewId:(id)a1;
- (void)onViewExpose:(id)a0 exposeIndex:(int)a1;
- (void)onViewClick:(id)a0 feedId:(id)a1 index:(int)a2 horizontalIndex:(int)a3;
- (void)useCache:(id)a0;
- (void)onCgiRequest:(id)a0 requestType:(int)a1;
- (void)onCgiBack:(id)a0 success:(BOOL)a1 cgiTimeCost:(int)a2 requestType:(int)a3;

@end
