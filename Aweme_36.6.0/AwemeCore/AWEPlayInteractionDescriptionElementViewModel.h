@protocol AWESearchPredictFetchProtocol;

@interface AWEPlayInteractionDescriptionElementViewModel : AWEPlayInteractionBaseElementViewModel

@property (retain, nonatomic) id<AWESearchPredictFetchProtocol> searchViewController;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)onAdDescriptionClicked:(id)a0 url:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)onDescriptionLabelClicked:(id)a0 url:(id)a1;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)splitScreenController;
- (void)interactor_onDescriptionLabelClicked:(id)a0 url:(id)a1;
- (void)router_onDescriptionLabelClicked:(id)a0 url:(id)a1;
- (void)onAdDescriptionTagClicked;
- (void)touchBeganForSearchViewControllerURL:(id)a0;
- (void)touchCancelForSearchViewController;
- (void)simplyLiveRoomPathActionWithRoomID:(id)a0 userID:(id)a1;
- (void)onDescriptionLabelClicked:(id)a0 url:(id)a1 extraInfo:(id)a2;
- (void)interactor_onDescriptionLabelClicked:(id)a0 url:(id)a1 extraInfo:(id)a2;
- (id)getTagIdForHashtag:(id)a0;
- (id)getTrendingTopicForHotSpotTag;
- (void)router_onDescriptionLabelClicked:(id)a0 url:(id)a1 extraInfo:(id)a2;
- (void)onAdDescriptionClickedWithAttributeString:(id)a0 url:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void).cxx_destruct;

@end
