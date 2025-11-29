@class NSMutableDictionary, NSString, NSMutableSet, NSMutableArray, _TtC6WeChat3HAR;

@interface GCRequestRecordService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) _TtC6WeChat3HAR *harObject;
@property (retain, nonatomic) NSMutableDictionary *requestModelDict;
@property (retain, nonatomic) NSMutableArray *requestArray;
@property (retain, nonatomic) _TtC6WeChat3HAR *interceptHar;
@property (retain, nonatomic) NSString *toPickFile;
@property (retain, nonatomic) NSMutableSet *usedInterCeptSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)enableRecord;
- (BOOL)enableIntercept;
- (id)requestKeyFromRequest:(id)a0;
- (id)requestModelFromRequest:(id)a0;
- (void)markRequestBegin:(id)a0 webView:(id)a1;
- (void)recordRequest:(id)a0 response:(id)a1;
- (void)recordRequest:(id)a0 data:(id)a1;
- (void)onFirstSchemeWebViewAppear;
- (id)pickOneHarFile;
- (BOOL)shouldInterceptRequest:(id)a0;
- (BOOL)shouldRecordRequest:(id)a0;
- (BOOL)shouldHandleRequest:(id)a0;
- (void)saveToHarFile;
- (void)showMsg:(id)a0;
- (void)showSuccessMsg:(id)a0 addtionalInfo:(id)a1;
- (void)showMsg:(id)a0 addtionalInfo:(id)a1;
- (id)trySaveHarObject:(id)a0 toPath:(id)a1;
- (id)harEntryForRequest:(id)a0;
- (void).cxx_destruct;

@end
