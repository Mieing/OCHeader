@class NSString;
@protocol AWEIMMessageTabPopupViewInterface;

@interface AWEIMMessageTabFoldChatPopupComponent : AWEIMComponentBase <AWEIMMessageTabPopupViewProtocol>

@property (weak, nonatomic) id<AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_shouldFetchDataForExpOpt:(id /* block */)a0;
+ (BOOL)p_shouldFetchDataForExp;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (void)asyncShowPopupViewIfNeeded:(id /* block */)a0;
- (id)p_fetchFoldChatPopupModel:(id /* block */)a0;
- (void)__showPopupWithCloseCallback:(id /* block */)a0;
- (void)__getFoldChatPopupModel:(id /* block */)a0;
- (BOOL)__shouldShowPopup;
- (id)__popupViewUIConfig;
- (void)__trackPopupShowWithItemsTotalCount:(long long)a0 actionType:(id)a1;
- (void)__setFoldingStatesWithItems:(id)a0;
- (void)__trackPopupConfirmWithTotalCount:(long long)a0 selectedItems:(id)a1;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;

@end
