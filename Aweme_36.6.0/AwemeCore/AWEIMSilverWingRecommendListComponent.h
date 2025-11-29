@class NSString;
@protocol AWEIMMessageListDataInterface;

@interface AWEIMSilverWingRecommendListComponent : AWEIMFlexComponent <AWEIMSilverWingAgreementGestureAction, AWEIMSilverWingLoadingActions>

@property (nonatomic) BOOL hasTrack;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_aiBusinessExtForMessage:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addObserver;
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)p_updateColor;
- (void)tapAcceptViewWithGesture:(id)a0;
- (void)didInsertHelloLoadingMessage;
- (void)p_acceptAgreement:(id)a0;
- (id)paramsForAICreator:(id)a0;
- (void)reloadRecommendList;
- (void)p_trackGroupAssistantWithEvent:(id)a0 extraParams:(id)a1;
- (void)p_hasClickRecommendWithModel:(id)a0;
- (id)p_messageForRecommendListViewModel:(id)a0;
- (id)hasEmojis:(id)a0;
- (void)p_trackRecommendListWithEvent:(id)a0 model:(id)a1;
- (void)p_trackFormatRecommendListShowEvent:(id)a0;
- (void)p_renderRecommendListWithMessage:(id)a0;
- (long long)messageAtTailPosition:(id)a0;
- (void).cxx_destruct;

@end
