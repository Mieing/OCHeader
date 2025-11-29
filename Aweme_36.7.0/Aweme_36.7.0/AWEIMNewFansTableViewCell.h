@class AWEIMFansActionContainer, AWEIMFansBottomContainer, AWEIMFansTitleContainer, UIView, UILongPressGestureRecognizer, AWESocialRelationObserver, AWEIMFansCellViewModel, NSString, AWEIMFansAvatarContainer, AWEIMFansContentContainer;
@protocol AFDColorRingFacadeProtocol;

@interface AWEIMNewFansTableViewCell : AWEIMSwipeTableViewCell <AWEUserMessage>

@property (retain, nonatomic) AWEIMFansAvatarContainer *avatarContainer;
@property (retain, nonatomic) AWEIMFansTitleContainer *titleContainer;
@property (retain, nonatomic) AWEIMFansContentContainer *contentContainer;
@property (retain, nonatomic) AWEIMFansBottomContainer *bottomContainer;
@property (retain, nonatomic) AWEIMFansActionContainer *actionContainer;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (retain, nonatomic) AWESocialRelationObserver *mateStatusObserver;
@property (retain, nonatomic) id<AFDColorRingFacadeProtocol> colorRingFacade;
@property (retain, nonatomic) AWEIMFansCellViewModel *viewModel;
@property (copy, nonatomic) id /* block */ handleLongPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (void)awe_themeReload;
- (void)setupBinding;
- (void)p_observeMateStatus;
- (void)p_updateMateRelation:(id)a0;
- (BOOL)isColorRingShow;
- (void)trackStoryColorRingShow;
- (void)updateCellUnreadStyle;
- (id)bgPrimary;
- (void)setupColorRingFacade;
- (void)initColorRing;
- (id)p_containers;
- (void)updateUserNameText;
- (void)updaterColorRingFacade;
- (void)configWithViewModel:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)accessibilityCustomActions;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (void)handleLongPressGesture:(id)a0;
- (void)setupViews;
- (void)willDisplay;

@end
