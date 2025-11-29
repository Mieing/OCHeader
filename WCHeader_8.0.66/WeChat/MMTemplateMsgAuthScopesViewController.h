@class BrandTemplateMsgAuthSettingPageModel, NSString, WAContactGetter, TemplateMsgAuthScopesReportModel, NSMutableArray;

@interface MMTemplateMsgAuthScopesViewController : ZZFLEXTableViewController <IMMTemplateMsgAuthServiceExt, IStrangerContactMgrExt> {
    NSMutableArray *_scopeList;
    WAContactGetter *_contactGetter;
    BOOL _hasFillOriginInfoAndReportEnterEvent;
    TemplateMsgAuthScopesReportModel *_templateMsgAuthScopesReportModel;
}

@property (nonatomic) BOOL isGlobalRecv;
@property (retain, nonatomic) BrandTemplateMsgAuthSettingPageModel *settingPageModel;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) BOOL isHasGlobalSwitchFooter;
@property (nonatomic) BOOL isHasB2CAuthList;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnterScene:(unsigned long long)a0;
- (id)initWithConfigModel:(id)a0;
- (id)init;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLoad;
- (void)tryUpdateKVReportInfo;
- (void)reloadUI;
- (void)onFetchShowInSettingScopeList:(id)a0 forUser:(id)a1 hasSettingEntry:(BOOL)a2;
- (void)onUpdateScopeGlobalRecv:(BOOL)a0 forUser:(id)a1;
- (void)getNickNameFromLocalOrServer;
- (void)getWeappContactForUsername:(id)a0 handler:(id /* block */)a1;
- (void)onStrangerContactUpdated:(id)a0;
- (BOOL)isWeAppUserName;
- (BOOL)isCurrentSceneNeedDataReporter;
- (void)fillTemplateMsgAuthScopesReportModelBaseInfo;
- (id)generateReportTemplateItems;
- (void)reportTemplateMsgAuthScopesOpType:(id)a0 scopeItem:(id)a1 templateItems:(id)a2;
- (void).cxx_destruct;

@end
