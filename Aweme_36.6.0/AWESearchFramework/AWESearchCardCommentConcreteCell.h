@class AWESearchCardCommentContentViewModel, UIView, NSString, UIImageView, UIButton, AWEUserNameLabel, AWESearchCardParagraphComponentModel, AWECommentModel, NSDictionary, UILabel;
@protocol AWESearchCardParagraphComponentProvider;

@interface AWESearchCardCommentConcreteCell : UITableViewCell <AWESearchCardCommentCellProtocol>

@property (retain, nonatomic) AWECommentModel *mainComment;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *avatarBorderView;
@property (retain, nonatomic) AWEUserNameLabel *nameLabel;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UILabel *likesLabel;
@property (retain, nonatomic) AWESearchCardCommentContentViewModel *contentViewModel;
@property (nonatomic) BOOL isLikeBtnAnimated;
@property (retain, nonatomic) id<AWESearchCardParagraphComponentProvider> paragraphComponent;
@property (retain, nonatomic) AWESearchCardParagraphComponentModel *paragraphComponentModel;
@property (retain, nonatomic) UIImageView *linkTagImageView;
@property (nonatomic) unsigned char isSupportADCard;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (copy, nonatomic) id /* block */ likeButtonTappedBlock;
@property (copy, nonatomic) id /* block */ truncationTokenTappedBlock;
@property (copy, nonatomic) id /* block */ avatarOrNameTappedBlock;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL isFromXigua;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transferToProfileWithURL:(id)a0 userModel:(id)a1 adModel:(id)a2;
+ (id)paragraphComponentModelWith:(id)a0;
+ (id)removeEmptyCharsIfNeed:(id)a0;
+ (double)commentHeightWithCellWidth:(double)a0 comment:(id)a1;
+ (id)identifier;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)likeButtonTapped;
- (void)themeDidChange:(id)a0;
- (void)configWithComment:(id)a0;
- (void)resetLikesLabel;
- (void)updateAvatarImageView;
- (void)updateLikesButton;
- (void)updateLikeButtonAccessibilityLabel;
- (void)configParagraphComponentWith:(id)a0;
- (void)updateLinkTagView;
- (void)updateLikeStateWithAnimation:(BOOL)a0 animated:(BOOL)a1;
- (void)adRouterToLandingPageOrUserProfileWithRefer:(id)a0;
- (void)checkUserIfLogin:(id /* block */)a0;
- (void)commentUserTapped:(id)a0;
- (void)linkHighlightTapped:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)addObserver;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)updateNameLabel;

@end
