@class NSString, AFDRecommendPanelContext, AWEAwemeModel;

@interface AFDRecommendPanelUserListSectionViewModel : AWEBaseListSectionViewModel <AFDRecommendPanelContentSectionViewModelProtocol>

@property (retain, nonatomic) AFDRecommendPanelContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)modelsDiffType;
- (void)initializeWithContext:(id)a0;
- (void)didShowUserCellWithModel:(id)a0;
- (void)trackRecommendVideoUserCellEventWithModel:(id)a0 actionType:(id)a1;
- (void)refreshListWithModel:(id)a0;
- (void)refreshListByActionWithModel:(id)a0;
- (id)cellConfigWithModel:(id)a0;
- (void)didClickUserCellWithModel:(id)a0;
- (BOOL)isFriendPost;
- (void)initializeTrackParamWithBusinessModel:(id)a0;
- (void)trackRecommendVideoPostscriptEvent;
- (void).cxx_destruct;

@end
