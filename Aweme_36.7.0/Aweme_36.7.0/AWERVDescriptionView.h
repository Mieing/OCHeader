@class AWEAwemeModel, UIView, NSString, AWERVCoCreatorHeadView, AWEUserModel, UIImageView, UIButton, NSDictionary, AWERelatedVideoDescriptionLabel, AWERVDetailPageContext, UILabel;
@protocol AWERVDescriptionViewDelegate, AWEFeedLiveMarkViewProtocol;

@interface AWERVDescriptionView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIView *authorContainerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UIImageView *xiguaIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWERelatedVideoDescriptionLabel *descriptionLabel;
@property (retain, nonatomic) UIView *expandHandleView;
@property (retain, nonatomic) UIImageView *expandImageView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UILabel *publishTimeLabel;
@property (copy, nonatomic) NSString *currentTrackMixID;
@property (retain, nonatomic) AWERVCoCreatorHeadView *coCreatorHeadView;
@property (nonatomic) BOOL shouldShowPublishTime;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) id<AWERVDescriptionViewDelegate> delegate;
@property (weak, nonatomic) AWERVDetailPageContext *context;

- (void)awe_themeReload;
- (void)liveMaskViewShowIfNeeded:(BOOL)a0 onView:(id)a1;
- (double)titleLabelHeight;
- (void)announceAccessibilityMsg:(id)a0;
- (double)authorContainerHeight;
- (id)__getRelationContext;
- (void)updateDescriptionLabel;
- (void)onFollowButtonTapped;
- (id /* block */)descriptionLabelTextActionWithAttributedString:(id)a0;
- (void)__updateFollowBtn:(BOOL)a0;
- (double)__descriptionLabelRightOffset;
- (long long)descriptionLabelNumberOfLines;
- (struct CGSize { double x0; double x1; })__descriptionLabelSize;
- (BOOL)shouldShowCoCreatorHeadView;
- (void)__reset;
- (void)__handleXiguaVideo;
- (double)__topBufferHeight;
- (double)coCreatorHeadViewHeight;
- (double)__bottomBufferHeight;
- (id)__currentExpandImage;
- (void)__expandDidClick;
- (void)__executeUnfollow;
- (void)__executeFollow;
- (void)trackFollowAuthor:(BOOL)a0;
- (void)onUserTapped:(id)a0;
- (void)liveMarkViewAction;
- (void)updateDescriptionViewWithModel:(id)a0;
- (void)descriptionViewWillBeHidden;
- (double)descriptionViewHeight;
- (void)mixVideoTapped;
- (void).cxx_destruct;
- (void)setupUI;
- (BOOL)shouldShowTitle;

@end
