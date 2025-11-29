@class AWEPlayInteractionAnchorViewModel, NSString, AWEPlayInteractionContext, AWEPlayInteractionUserAvatarElementViewModel, AWEAwemeModel, NSDictionary, AWEPlayInteractionDescriptionElementViewModel, AWEPlayInteractionMusicInfoElementViewModel, AWEPlayInteractionPersonElementViewModel;

@interface AWEAwemePlayInteractionRouter : NSObject <AWEAwemePlayInteractionRouterProtocol>

@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWEPlayInteractionPersonElementViewModel *personViewModel;
@property (retain, nonatomic) AWEPlayInteractionUserAvatarElementViewModel *userAvatarViewModel;
@property (retain, nonatomic) AWEPlayInteractionMusicInfoElementViewModel *musicInfoViewModel;
@property (retain, nonatomic) AWEPlayInteractionAnchorViewModel *anchorViewModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionElementViewModel *descriptionViewModel;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL isRecommendedCard;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (nonatomic) unsigned long long eventSource;
@property (copy, nonatomic) NSString *adEventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMvLabelClicked:(id)a0;
- (void)onOneKeyLabelClicked:(id)a0;
- (void)onMusicBeatTemplateLabelClicked:(id)a0;
- (void)onStickerLabelClicked:(id)a0;
- (void)onAuthorLabelClicked:(id)a0;
- (void)onDescriptionLabelClicked:(id)a0 url:(id)a1;
- (void)onPoiLabelClicked:(id)a0 enterMethod:(id)a1;
- (void)onUserAvatarViewClicked:(id)a0 enterPosition:(id)a1;
- (void)onLiveUserAvatarViewClicked:(id)a0 exitOldRoom:(BOOL)a1;
- (void)onAuthorLabelClicked:(id)a0 enterPosition:(id)a1;
- (void)enterRepostedUser;
- (void)enterUserDetailWithEnterMethod:(id)a0 enterPosition:(id)a1;
- (void)enterMusicDetailWithRouterDict:(id)a0;
- (void)onLiveUserAvatarViewClicked:(id)a0 exitOldRoom:(BOOL)a1 shouleTrackClick:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setupContext;

@end
