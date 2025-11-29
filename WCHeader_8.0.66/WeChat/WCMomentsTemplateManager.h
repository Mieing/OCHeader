@class NSString, NSMutableSet, MJVideoTemplate;

@interface WCMomentsTemplateManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MJVideoTemplate *defaultTemplate;
@property (nonatomic) BOOL isCheckingUpdatesForDefaulteTemplates;
@property (nonatomic) double lastTimeThatUpdatesDefaulteTemplates;
@property (readonly, nonatomic) NSMutableSet *preloadingTemplateIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)checkUpdatesForDefaultTemplates;
- (void)loadDefaultTemplate;
- (void)updateDefaultTemplate:(id)a0;
- (void)preloadTemplateInfoIfNeededWithID:(id)a0 scene:(unsigned long long)a1;
- (id)recommendedExportSettings;
- (BOOL)canMakeSameMiaoJianTemplateForMomentsTemplateInfo:(id)a0;
- (id)MMKVKeyForRegularGuide:(long long)a0;
- (BOOL)shouldShowRegularGuide:(long long)a0;
- (void)didAcceptRegularGuide:(long long)a0;
- (void)removeRegularGuidRecord:(long long)a0;
- (void)removeRegularGuidRecords;
- (void)_clearDeprecatedData;
- (void).cxx_destruct;

@end
