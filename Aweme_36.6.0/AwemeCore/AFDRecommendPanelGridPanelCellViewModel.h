@class NSString, AFDRecommendPanelContext, AWEAwemeModel;
@protocol AWEIMCustomQuickReplyControllerHandlerPortocol, AFDRecommendPanelGridPanelCellViewModelDelegate;

@interface AFDRecommendPanelGridPanelCellViewModel : AWEBaseListCellViewModel <AWEUserMessage, AWEListDiffable, AFDUserListGridPanelCellDelegate>

@property (retain, nonatomic) AFDRecommendPanelContext *context;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWEIMCustomQuickReplyControllerHandlerPortocol> imCustomQuickReplyHandler;
@property (weak, nonatomic) id<AFDRecommendPanelGridPanelCellViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)setupWithModel:(id)a0;
- (id)diffIdentifierKey;
- (void)initializeWithContext:(id)a0;
- (id)cellModelWithModel:(id)a0;
- (void)didClickCellWithModel:(id)a0;
- (void)didShowUserCellWithModel:(id)a0;
- (void)initializeTrackParam;
- (void)trackRecommendVideoPostscriptEventWithActionType:(id)a0;
- (void)trackRecommendVideoUserCellEventWithModel:(id)a0 actionType:(id)a1;
- (id)clickActionForCurrentUserWithModel:(id)a0;
- (void)showPostscriptBrowsePanelWithModel:(id)a0;
- (void)showIMQuickReplyPanelWithModel:(id)a0;
- (id)generateItemModelWithCellModel:(id)a0;
- (void)showPostscriptInputPanel;
- (id)quickReplyParamWithUserModel:(id)a0;
- (void)didTapBubbleWithModel:(id)a0;
- (void)didTapSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshData;

@end
