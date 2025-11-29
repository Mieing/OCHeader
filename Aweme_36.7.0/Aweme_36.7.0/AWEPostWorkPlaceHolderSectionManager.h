@class AWETabCeilingToastModel, NSString, AWEPostWorkPlaceHolderSectionModel, UIView;

@interface AWEPostWorkPlaceHolderSectionManager : AWEUserWorkSectionManager <AWEPostWorkPlaceHolderSectionManagerProtocol>

@property (copy, nonatomic) NSString *currentUserID;
@property (nonatomic) unsigned long long sectionState;
@property (retain, nonatomic) AWEPostWorkPlaceHolderSectionModel *historyDraftTipModel;
@property (weak, nonatomic) UIView *historyDraftTipView;
@property (retain, nonatomic) AWEPostWorkPlaceHolderSectionModel *douGuideTipModel;
@property (retain, nonatomic) AWETabCeilingToastModel *tabCeilingToastModel;
@property (weak, nonatomic) UIView *douGuideTipView;
@property (nonatomic) BOOL trackedDouGuideTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleDOUYINHTSAdapterClass;
+ (Class)aAWEUserProfileModuleServiceDOUYINHTSAdaperClass;

- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)aAWEMainModuleDOUYINHTSAdapter;
- (BOOL)shouldShowHistoryDraftTipView;
- (id)aAWEUserProfileModuleServiceDOUYINHTSAdaper;
- (void)updateViewModelData;
- (void)buildProfileTipIfNeeded;
- (void)buildHistoryDraftTipModel;
- (BOOL)shouldShowDouGuideTipView;
- (void)buildDouGuideTipModel;
- (void)destroyHistoryDraftTipModel;
- (id)createHistoryDraftTipView;
- (id)createDouGuideTipView;
- (id)douGuideTrackParams;
- (id)douGuideEnterpriseToast;
- (id)linkText:(long long)a0;
- (void)clickDouGuideTipView;
- (void)closeDouGuideTipView;
- (void).cxx_destruct;
- (id)viewModel;
- (void)containerViewDidLoad;
- (double)sectionHeight;

@end
