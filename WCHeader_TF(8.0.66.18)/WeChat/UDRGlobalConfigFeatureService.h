@class NSString, NSMutableDictionary;

@interface UDRGlobalConfigFeatureService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *allProjectClass;
@property (retain, nonatomic) NSMutableDictionary *allClassName;
@property (retain, nonatomic) NSMutableDictionary *universalReportMap;
@property (retain, nonatomic) NSMutableDictionary *universalCleanMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)registerProjectId:(id)a0 className:(id)a1;
- (id)getMMKV:(id)a0;
- (id)getAllUDRProjectClassMap;
- (id)getUDRProjectClass:(id)a0;
- (float)getReportSample:(id)a0 name:(id)a1;
- (int)getCleanInterval:(id)a0 name:(id)a1;
- (id)getParameter:(id)a0;
- (void)buildAllBiz;
- (void)buildUdrSubBizConfig:(Class)a0;
- (void).cxx_destruct;

@end
