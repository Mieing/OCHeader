@class CJPayDyPayProcessConfigModel, NSMutableDictionary, NSString, CJPayNavigationController;
@protocol CJPayAPIDelegate;

@interface CJPayOuterManager : NSObject <CJPayOuterModule>

@property (weak, nonatomic) CJPayNavigationController *byteNavVC;
@property (weak, nonatomic) id<CJPayAPIDelegate> apiDelegate;
@property (retain, nonatomic) NSMutableDictionary *preRequestCreateOrderCacheDict;
@property (retain, nonatomic) NSMutableDictionary *preRequestCreateOrderCompletionBlocksDict;
@property (nonatomic) BOOL isPreRequestCreateOrderDoing;
@property (weak, nonatomic) CJPayDyPayProcessConfigModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)p_handleAppWillResignActive;
- (void)p_addNotification;
- (void)p_handleAppDidEnterBackground;
- (void)p_handleAppDidBecomeActive;
- (void)i_openOuterDeskWithSchemaParams:(id)a0 withDelegate:(id)a1;
- (void)i_requestCreateOrderBeforeOpenBytePayDeskWith:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_isMatchDypayProcess:(id)a0;
- (void)p_openOuterDeskInNewPathWithSchemaParams:(id)a0 withDelegate:(id)a1;
- (id)p_outerDyPayTrackData:(id)a0;
- (void)p_openOuterDeskWithSchemaParam:(id)a0 withDelegate:(id)a1;
- (id)p_buildDyPayProcessConfigModelWithSchemaParams:(id)a0 withDelegate:(id)a1;
- (void)p_trackEventDurationTimeWithEventName:(id)a0 eventParams:(id)a1 schemaParams:(id)a2;
- (void)p_completionAndJumpBackToMerchantApp:(long long)a0 schemaParams:(id)a1 configModel:(id)a2 completion:(id /* block */)a3;
- (void)p_dyPayCreateOrderRequestWith:(id)a0 completion:(id /* block */)a1;
- (void)p_createOrderByTokenRequestWith:(id)a0 completion:(id /* block */)a1;
- (void)p_presentVCFrom:(id)a0 navVC:(id)a1 isUseToastLoading:(BOOL)a2;
- (void)p_handleWillEnterForeground;
- (id)p_appLifeParams;
- (void).cxx_destruct;
- (void)dealloc;

@end
