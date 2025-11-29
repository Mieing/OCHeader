@class AWEVideoCoverImageTemplateProviderView, NSString, AWEVideoCoverImageTemplateListTabsView, AWEVideoCoverImageTemplateListContentView, UIView, AWENewVideoCoverEditTemplateViewModel;
@protocol ACCLoadingViewProtocol, ACCDUXLoadingInstance, AWEVideoCoverImageTemplateListViewDelegate;

@interface AWEVideoCoverImageTemplateListView : UIView <AWEVideoCoverImageTemplateListTabsViewDelegate, AWEVideoCoverImageTemplateListContentViewDelegate>

@property (retain, nonatomic) UIView *normalView;
@property (retain, nonatomic) AWEVideoCoverImageTemplateListTabsView *tabsView;
@property (retain, nonatomic) AWEVideoCoverImageTemplateListContentView *templatesView;
@property (retain, nonatomic) AWEVideoCoverImageTemplateProviderView *providerView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingIndicator;
@property (retain, nonatomic) UIView *networkErrorView;
@property (retain, nonatomic) UIView<ACCDUXLoadingInstance> *progressLoadingView;
@property (weak, nonatomic) AWENewVideoCoverEditTemplateViewModel *viewModel;
@property (nonatomic) BOOL hasFirstRenderedTemplateReport;
@property (retain, nonatomic) UIView *currentView;
@property (weak, nonatomic) id<AWEVideoCoverImageTemplateListViewDelegate> delegate;
@property (nonatomic) long long loadStatus;
@property (nonatomic) BOOL selectInvertEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)templateSelectSetup;
- (void)reloadTemplateList;
- (void)applyTemplateSuccess;
- (void)reselectTemplateModel;
- (void)applyTemplateFailed;
- (void)clearTemplateChooseStatus;
- (void)networkErrorButtonClicked:(id)a0;
- (void)setCurrentSelectedTabIndexPath:(id)a0;
- (void)p_scrollToIndexPath:(id)a0;
- (void)p_trackApplyTemplateEndWithIfSuccess:(BOOL)a0;
- (void)p_selectTemplateAtIndexPath:(id)a0 unselectIndexPath:(id)a1 defaultTabIndexPath:(id)a2;
- (id)currentSelectedTabIndexPath;
- (void)templateImageDoSelectForIndexPath:(id)a0;
- (void)p_setupLoading;
- (void)p_setupNetworkError;
- (void)templateListContentView:(id)a0 didMoveToIndexPath:(id)a1;
- (void)templateListContentView:(id)a0 checkBeforeSelectIdxPath:(id)a1 isInvertSelect:(BOOL)a2 isHistory:(BOOL)a3;
- (void)templateListContentView:(id)a0 showAuthorInfoWith:(id)a1 isHistory:(BOOL)a2;
- (void)markEnterType:(id)a0 atIndex:(id)a1;
- (void)tabsView:(id)a0 didSelectAtIndexPath:(id)a1;
- (void)clearButtonClickedInTabsView:(id)a0;
- (void)p_setupNormal;
- (void)p_showComplianceNotificationAndAuthorInfoAndClearBtnStatusWith:(id)a0 isHistory:(BOOL)a1;
- (void)p_loadingViewDismiss;
- (void)p_selectTemplateAtIndexPath:(id)a0 isHistory:(BOOL)a1;
- (void)p_trackApplyTemplateCancelWithUnselectedIndexPath:(id)a0;
- (void)p_loadingViewShowWithCancelBlock:(id /* block */)a0;
- (void)p_clearTemplateInfo;
- (void)selectTemplateWithLoadingAtIndexPath:(id)a0 isHistory:(BOOL)a1;
- (id)p_viewForLoadStatus:(long long)a0;
- (void)p_setupUI;
- (void)reloadData;
- (void).cxx_destruct;
- (void)showLoadingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
