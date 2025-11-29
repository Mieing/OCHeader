@class NSURLSession, NSArray, NSString, MMTableViewInfo, MPPageFastLoadEventMgr;

@interface MPPageFastLoadTmplViewController : MMUIViewController <MMTableViewInfoDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, IMPPageFastLoadExtensionEvent>

@property (retain, nonatomic) NSArray *arrTmplNum;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (weak, nonatomic) MPPageFastLoadEventMgr *pageFastLoadEventMgr;
@property (nonatomic) BOOL isInDownloadProcess;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (void)initNavigationBarItem;
- (void)onReturn;
- (void)initView;
- (void)initTableView;
- (void)buildTableViewData;
- (void)reBuildDownloadInfoSection;
- (void)reBuildWebComptPkgLibSection;
- (id)currentDevTmplSection;
- (id)currentTmplInfoSection;
- (id)currentTmplDownloadStateSection;
- (id)currentWebComptPkgSession;
- (id)mpFastLoadDebugSession;
- (void)onMPFastLoadTimeoutDisableChanged:(id)a0;
- (void)onTmplInfoCellSelected:(id)a0 indexPath:(id)a1;
- (void)onTmplDevInfoCellSelected:(id)a0 indexPath:(id)a1;
- (void)onClearTmplDevCellSelected:(id)a0 indexPath:(id)a1;
- (void)onDownloadInfoCellSelected:(id)a0 indexPath:(id)a1;
- (void)onDownloadDeubugWebComptPkgCellSelected:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)showUpTemplateVersionWithTemplateInfo:(id)a0;
- (void)onResponseHTTPCheckTmplInfo:(id)a0 data:(id)a1 error:(id)a2 templateType:(unsigned int)a3;
- (void)requestDebugWebComptPkgLib;
- (void)deleteDebugWebComptPkgLib;
- (void)onResponseHTTPDownloadWebComptDebugPkgLib:(id)a0 data:(id)a1 error:(id)a2;
- (void)onTemplateType:(unsigned int)a0 downloadStateChanged:(unsigned int)a1 checkTmplInfo:(id)a2 templateInfo:(id)a3;
- (void)onTemplateType:(unsigned int)a0 downloadEndWithEvent:(unsigned int)a1 checkTmplInfo:(id)a2 templateInfo:(id)a3 descMsg:(id)a4;
- (id)__detailNameFromPageFastTmplDownloadState:(unsigned int)a0;
- (id)__detailDescFrinPageFastTmplDownloadEndEvent:(unsigned int)a0;
- (void).cxx_destruct;

@end
