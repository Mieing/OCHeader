@class NSMutableArray;

@interface CJPayDyPayManagerV2 : NSObject <CJPayDyPayModuleV2>

@property (retain, nonatomic) NSMutableArray *dypayProcessControllerStack;

+ (void)registerComponents;
+ (id)sharedInstance;

- (void)i_openDyPayProcessWithConfigModel:(id)a0;
- (void)i_openDyPayDeskWithParams:(id)a0 delegate:(id)a1;
- (void)i_closeExistingProcess:(id)a0 completion:(id /* block */)a1;
- (id)p_detectContainerWayFromURL:(id)a0;
- (id)p_getIndustryExt:(id)a0 params:(id)a1;
- (id)p_buildConfigModelWithParams:(id)a0 delegate:(id)a1;
- (BOOL)p_isAlreadyExistingSameProcess:(id)a0;
- (void)p_completionFailWithConfigModel:(id)a0 errorMsg:(id)a1;
- (BOOL)p_isNeedOpenEvokeManagedProcessWithModel:(id)a0;
- (void)p_startEvokeManagedProcessByCreateNewProcessController:(id)a0;
- (void)p_startProcessByCreateNewProcessController:(id)a0;
- (void)p_closeAllExistingProcess:(id /* block */)a0;
- (void)p_completionWithConfigModel:(id)a0 apiResponse:(id)a1;
- (void)p_logError:(id)a0 extParams:(id)a1;
- (id)p_buildDyPayTrackCommonData:(id)a0 configModel:(id)a1;
- (void).cxx_destruct;

@end
