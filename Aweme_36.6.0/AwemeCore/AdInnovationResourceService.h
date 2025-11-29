@class NSString, NSMutableDictionary, AdInnovationModel;
@protocol AdInnovationEventReporterProtocol;

@interface AdInnovationResourceService : NSObject <IESGurdEventDelegate>

@property (weak, nonatomic) id<AdInnovationEventReporterProtocol> reporter;
@property (retain, nonatomic) AdInnovationModel *model;
@property (retain, nonatomic) NSMutableDictionary *modelCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)geckoAccessKeyWithAppStore:(BOOL)a0;

- (void)gurdWillDownloadPackageForAccessKey:(id)a0 channel:(id)a1 isPatch:(BOOL)a2;
- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)a0 channel:(id)a1 packageInfo:(id)a2;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)didReceiveMemoryWarningNotification;
- (void)updateWithJson:(id)a0;
- (BOOL)isValidAccessKey:(id)a0;
- (void)updateWithJson:(id)a0 downloadWillStartBlock:(id /* block */)a1;
- (BOOL)isValidAccessKey:(id)a0 channel:(id)a1;
- (id)modelWithChannel:(id)a0;
- (void)safeRemoveAllModels;
- (BOOL)isValidChannel:(id)a0;
- (void)geckoResourceDownloadStartWithContext:(id)a0;
- (void)geckoResourceDownloadFinishWithContext:(id)a0;
- (void)geckoResourceActivateFinishWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithReporter:(id)a0;
- (void)reset;
- (void)dealloc;

@end
