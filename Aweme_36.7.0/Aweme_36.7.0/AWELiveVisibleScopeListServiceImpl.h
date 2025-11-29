@class NSString;

@interface AWELiveVisibleScopeListServiceImpl : NSObject <IESLiveVisibleScopeListService>

@property (nonatomic) unsigned long long currentSelectedVisibleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getVisibleScopeDetailListVC:(unsigned long long)a0 liveType:(unsigned long long)a1 DIContext:(id)a2 selectedBlock:(id /* block */)a3;
- (id)getItemAddTextOf:(unsigned long long)a0;
- (id)getCreateAPIParamsOf:(unsigned long long)a0;
- (id)getTrackStrOf:(unsigned long long)a0;
- (void)updateOpenLiveModel:(id)a0;
- (void)openTryLiveVisibleScopeDetailVC:(id)a0;
- (id)getVisiblePanelViewWithType:(unsigned long long)a0 liveType:(unsigned long long)a1 DIContext:(id)a2 selectedBlock:(id /* block */)a3;
- (id)getPaidVisiblePanelViewWithVisibleType:(unsigned long long)a0 selectedUsers:(id)a1 isShowNotPreviewOption:(BOOL)a2 isPaidOpenLiveNow:(BOOL)a3 selectedBlock:(id /* block */)a4;
- (void)setTryLiveVisibleScopeWithDIContext:(id)a0 completedBlock:(id /* block */)a1;
- (void)openAudienceExemptionPageWithCompletion:(id /* block */)a0;
- (id)openVisibleSelectPanelInitType:(long long)a0 trackContext:(id)a1 isPlayBack:(BOOL)a2 DIContext:(id)a3 completion:(id /* block */)a4;

@end
