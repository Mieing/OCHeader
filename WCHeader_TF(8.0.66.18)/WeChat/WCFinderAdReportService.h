@class MMLRUCache, NSString;

@interface WCFinderAdReportService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMLRUCache *adReportMetaCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateAdReportMetaWithTid:(id)a0 scene:(int)a1 metaBlock:(id /* block */)a2;
- (void)updateAdReportExitActionType:(unsigned long long)a0 tid:(id)a1 scene:(int)a2;
- (void)reportADWithTid:(id)a0 scene:(int)a1 endExpose:(BOOL)a2 reportDict:(id)a3 adInfo:(id)a4;
- (void)reportAdCommentWithTid:(id)a0 scene:(int)a1 endExpose:(BOOL)a2 reportDict:(id)a3 reportBypData:(id)a4;
- (void)reportPremovieAdWithTid:(id)a0 scene:(int)a1 actionType:(unsigned long long)a2 reportDict:(id)a3 reportBypData:(id)a4;
- (void)feedbackCommentAdWithType:(int)a0 reasonArray:(id)a1 params:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)_metaKeyWithTid:(id)a0 scene:(int)a1;
- (id)_getAndCacheMetaWithTid:(id)a0 scene:(int)a1;
- (void).cxx_destruct;

@end
