@class AWEIMFansGroupModuleServiceTracker, AWEIMFansGroupGuestStateViewModel, AWEIMApplyJoinFansGroupCommonModel, NSString, UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMFansGroupModuleService : HTSService <AWEIMFansGroupModuleServiceProtocol, HTSService>

@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEIMFansGroupGuestStateViewModel *viewModel;
@property (retain, nonatomic) AWEIMFansGroupModuleServiceTracker *tracker;
@property (retain, nonatomic) AWEIMApplyJoinFansGroupCommonModel *applyModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (void)setupVM;
- (id)convertApplyModelToItemModel:(id)a0;
- (void)enterMessageListVCWithModel:(id)a0 cid:(id)a1 completion:(id /* block */)a2;
- (void)createFansGroupConversationWithCreateFansGroupModel:(id)a0 completion:(id /* block */)a1;
- (id)convertCreateModelToFansGroupModel:(id)a0;
- (void)createFansGroupWithCreateFansGroupModel:(id)a0 completion:(id /* block */)a1;
- (void)applyJoinFansGroupWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
