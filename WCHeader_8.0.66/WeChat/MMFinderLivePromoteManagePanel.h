@class UIView, NSString, MMFinderLiveTask, MMFinderLivePromoteTableViewModel, MMFinderLiveTaskId, MMFinderLivePromoteLogic, MMUILabel, MMTableView, MMUIActivityIndicatorView;
@protocol MMFinderLivePromoteManagePanelDelegate, MMFinderLivePromoteManageReportDelegate;

@interface MMFinderLivePromoteManagePanel : MMPageSheetBaseView <MMFinderLivePromoteTableViewDelegate, WCActionSheetDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) MMUILabel *addPromoteDescriptionLabel;
@property (retain, nonatomic) MMTableView *promoteTableView;
@property (retain, nonatomic) MMFinderLivePromoteTableViewModel *promoteTableViewModel;
@property (retain, nonatomic) MMFinderLivePromoteLogic *promoteDataLogic;
@property (copy, nonatomic) id /* block */ closeCompletion;
@property (weak, nonatomic) id<MMFinderLivePromoteManagePanelDelegate> delegate;
@property (weak, nonatomic) id<MMFinderLivePromoteManageReportDelegate> reportDelegate;
@property (copy, nonatomic) id /* block */ showLivePromoteAddPanelBlock;
@property (nonatomic) BOOL loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)innerInit;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutActivityIndicatorView;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)layoutSubviews;
- (void)updateNavBarUI;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (void)showLivePromoteAddPanel;
- (void)layoutUI;
- (void)layoutContentView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutUIForNoDataState;
- (void)layoutAddPromoteDescriptionLabel;
- (void)layoutUIForHasDataState;
- (void)layoutPromoteTableView;
- (void)leftButtonAction;
- (void)onPromoteItemDelete:(id)a0;
- (void)onPromoteItemSend:(id)a0 onConfirm:(id /* block */)a1;
- (void)onPromoteItemCancel:(id)a0;
- (void)onPromoteItemContentDisplay:(id)a0;
- (void)onPromoteItemContentAction:(id)a0;
- (void)updateFetchDataWithErrorCode:(long long)a0 promoteInfoList:(id)a1 promoteAvailableItemList:(id)a2;
- (void)sendPromoteItem:(id)a0 onConfirm:(id /* block */)a1;
- (void)cancelPromoteItem:(id)a0;
- (void)setEnablePushPromote:(BOOL)a0;
- (BOOL)isPromoting;
- (void)onLiveStaterPromoteOperatonReportWithItem:(id)a0 actionResult:(long long)a1;
- (void)onLivePromoteOperatonReportWithItem:(id)a0 actionResult:(long long)a1;
- (void)onPromoteItemExposeReport:(id)a0;
- (void)onPromoteItemClickReport:(id)a0;
- (void)reportForPromoteItem:(id)a0 isSent:(BOOL)a1;
- (void).cxx_destruct;

@end
