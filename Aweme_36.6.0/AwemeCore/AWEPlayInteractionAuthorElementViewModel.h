@class NSString, UIViewController, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionAuthorElementViewModel : AWEPlayInteractionPersonElementViewModel <AWEPlayInteractionAuthorElementViewModelProtocol>

@property (retain, nonatomic) NSString *pageTypeString;
@property (nonatomic) long long fromPageType;
@property (nonatomic) BOOL isRecommendedCard;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL showDecoration;
@property (readonly, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAuthorLabelClicked:(id)a0;
- (void)onNewLiveMarkViewClicked;
- (void)onRichAwemeTagClicked:(id)a0;
- (void)onCoCreatorLabelClicked:(id)a0 delegate:(id)a1;
- (void)onChapterTagLabelClicked:(id)a0 delegate:(id)a1;
- (void)onStoryTagViewClicked:(id)a0;
- (void)onVerifiedIconClicked:(id)a0;
- (void)onTimeLabelClicked:(id)a0;
- (void)onClearViewClicked:(id)a0;
- (void)onStablePageEntranceClick:(id)a0;
- (void)onAuthorLabelClicked:(id)a0 enterMethod:(id)a1;
- (void)__trackXiguaVideoAvatarClick;
- (void)_onAuthorLabelClicked_IMP:(id)a0;
- (void)_onAuthorLabelClicked_IMP:(id)a0 enterMethod:(id)a1;
- (void)_onNewLiveMarkViewClicked_IMP;
- (BOOL)storyCanEnterDetail;
- (void)enterRichAweme:(id)a0;
- (void)_onStoryTagViewClicked_IMP:(id)a0;
- (BOOL)richAwemeplainTextClick;
- (id)currentUser;

@end
