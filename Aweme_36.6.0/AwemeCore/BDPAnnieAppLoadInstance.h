@class BDPModel, NSDictionary, BDPPromise, UIView, NSString;
@protocol BDPPageProtocol;

@interface BDPAnnieAppLoadInstance : BDPBaseLoadInstance

@property (retain, nonatomic) BDPPromise *pageReadyPromise;
@property (retain, nonatomic) BDPPromise *appConfigPromise;
@property (retain, nonatomic) BDPPromise *readyToLoadPromise;
@property (retain, nonatomic) BDPModel *coldBootModel;
@property (retain, nonatomic) UIView<BDPPageProtocol> *firstPage;
@property (copy, nonatomic) NSDictionary *appConfigData;
@property (copy, nonatomic) NSString *pathChangeReason;
@property (readonly, nonatomic) BDPPromise *jscReadyPromise;

+ (void)bootstrapLaunch;
+ (id)validateMeta:(id)a0;
+ (id)appRenderType;
+ (long long)type;

- (void)updateSchema:(id)a0;
- (id)businessParamForEvent:(id)a0;
- (BOOL)canFastBootWithLoadCache:(id)a0;
- (unsigned long long)checkModelStatus:(id)a0 reader:(id)a1;
- (void)setupAppConfigPromiseWithModel:(id)a0;
- (id)startAnniePagePageWithModel:(id)a0;
- (void)metaInfoModelCompletion:(id)a0 model:(id)a1 reader:(id)a2;
- (void)readAppConfigWithModel:(id)a0 configDic:(id)a1;
- (id)setupCommonAndTaskWithModel:(id)a0 configDict:(id)a1;
- (void)commonAndTaskSetupDone:(BOOL)a0;
- (void)doubleReadyCheck;
- (void)onAppLaunch:(BOOL)a0;
- (void)setUpFirstAppPage:(BOOL)a0;
- (void)prepareForStartPage:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isPath:(id)a0;
- (id)findRedirectPagePath:(id)a0;
- (id)setUpAppPage:(id)a0 isColdFP:(BOOL)a1;
- (void)becomeReadyStatus;
- (void)firstFrameDidShow;
- (void)updateInnerTrustConfig:(id)a0;
- (BOOL)canApplyUpdate;
- (Class)customTaskClass;
- (void)loadInstanceDidCreated:(BOOL)a0;
- (void)readyToLoadAppWithModel:(id)a0;
- (void)launchEndWithNoRoute;
- (void)workBeforeClose:(id)a0;
- (void)updateHomeButtonShowState;
- (void).cxx_destruct;
- (id)currentPage;

@end
