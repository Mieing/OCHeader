@class MMFinderLiveFansGroupManageContentView, NSString, MMFinderLiveTaskId, UIView, MMFinderLiveFansGroupCreateContentView;
@protocol MMFinderLiveFansGroupOperationReportDelegate;

@interface MMFinderLiveFansGroupOperationPanel : MMPageSheetBaseView <MMFinderLiveFansGroupAnchorEditPanelDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) long long currentOperateState;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) MMFinderLiveFansGroupCreateContentView *createContentView;
@property (retain, nonatomic) MMFinderLiveFansGroupManageContentView *manageContentView;
@property (nonatomic) BOOL isKeyBoardShow;
@property (nonatomic) BOOL isPageWillClose;
@property (nonatomic) double keyBoardHeight;
@property (weak, nonatomic) id<MMFinderLiveFansGroupOperationReportDelegate> reportDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)innerInit;
- (void)dealloc;
- (void)initNotifications;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)a0;
- (id)liveTask;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (void)layoutCreateContentView;
- (void)layoutManageContentView;
- (double)contentWidth;
- (double)contentHeight;
- (void)updateDetailViewFrame;
- (void)updateCurrentOperateState:(long long)a0;
- (void)refreshUIForCurrentOperateState;
- (void)showWithAnimated:(BOOL)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)updatePageSheetCloseRecognizer;
- (void)onFansGroupNameChangedTo:(id)a0 byEditPanel:(id)a1;
- (void)navigateToEditPanelWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
