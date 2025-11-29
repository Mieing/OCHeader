@class AWEIMBatchFansGroupManagementInfoPageModel, NSArray, NSString, AWEIMFansGroupChatListViewModel, AWEIMMyFansGroupInfoViewModel;
@protocol IESIMGroupBatchGroupMemberVisitViewModelProtocol;

@interface AWEIMBatchFansGroupManagementViewModel : NSObject

@property (nonatomic) BOOL shouldShowOperationBanner;
@property (retain, nonatomic) NSArray *plateTypeIndexList;
@property (retain, nonatomic) NSArray *managementEntryIndexList;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL shouldShowEmptyPage;
@property (nonatomic) BOOL needRefreshView;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSString *pageSubtitle;
@property (copy, nonatomic) NSString *navRightButtonTitle;
@property (copy, nonatomic) NSArray *fansGroupManagementPlateInfoVMList;
@property (retain, nonatomic) AWEIMBatchFansGroupManagementInfoPageModel *batchManagementInfoModel;
@property (retain, nonatomic) AWEIMFansGroupChatListViewModel *chatListViewModel;
@property (copy, nonatomic) NSArray *managementEntryViewModelList;
@property (copy, nonatomic) NSArray *contributionViewModelList;
@property (retain, nonatomic) AWEIMMyFansGroupInfoViewModel *myFansGroupInfoViewModel;
@property (retain, nonatomic) id<IESIMGroupBatchGroupMemberVisitViewModelProtocol> groupMemberVisitViewModel;
@property (nonatomic) BOOL shouldShowIntroducePage;
@property (nonatomic) BOOL creatingGroup;

- (struct CGSize { double x0; double x1; })referenceSizeForHeaderInSection:(long long)a0;
- (struct CGSize { double x0; double x1; })referenceSizeForFooterInSection:(long long)a0;
- (id)businessInfoUrl;
- (void)fetchBatchFansGroupManagementDataWithCompletion:(id /* block */)a0;
- (long long)plateTypeWithSection:(long long)a0;
- (long long)headerTypeWithSection:(long long)a0;
- (long long)footerTypeWithSection:(long long)a0;
- (long long)itemTypeWithIndex:(long long)a0;
- (BOOL)p_isShouldShowBanner;
- (void)p_setupPageTitle;
- (void)__setupViewModels;
- (void)__setupPlateInfoVMList;
- (void)p_setupGroupMemberVisit;
- (void)__setupChatListViewModel;
- (void)__setupManagementEntryViewModelList;
- (void)__setupContributionViewModelList;
- (void)__setupMyFansGroupInfoViewModel;
- (BOOL)__hasContributions;
- (double)introducePageBottomButtonHeight;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndexPath:(id)a0;
- (id)conversationIDs;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetForSection:(long long)a0;

@end
