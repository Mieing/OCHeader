@class NSString, WSHotListContainerView;

@interface WSHotListTemplateService : WSTemplateBaseMgr <ISearchConfigDataExt, IMMFontMgrExt>

@property (retain, nonatomic) WSHotListContainerView *hotListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)defaultTemplateZipPath;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned long long)localJSBizType;
- (BOOL)shouldShowEntry;
- (unsigned long long)entranceExptValue;
- (void)onSearchConfigDataUpdated;
- (void).cxx_destruct;

@end
