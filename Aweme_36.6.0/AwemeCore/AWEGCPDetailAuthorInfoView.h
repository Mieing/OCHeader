@class UIStackView, UIImageView, UILabel, UIView, MASConstraint;
@protocol IESGCPLiveAnimationService;

@interface AWEGCPDetailAuthorInfoView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *infoStackView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *liveMarkView;
@property (retain, nonatomic) MASConstraint *avatarSizeConstraint;
@property (retain, nonatomic) MASConstraint *liveMarkSizeConstraint;
@property (retain, nonatomic) id<IESGCPLiveAnimationService> liveAnimationService;
@property (copy, nonatomic) id /* block */ onAuthorInfoTappedBlock;
@property (copy, nonatomic) id /* block */ onComponentInfoTappedBlock;
@property (nonatomic) BOOL shouldHiddenTag;

- (id)initWithDIContext:(id)a0;
- (void)onComponentInfoTapped;
- (void)updateWithAvatarImageUrlList:(id)a0 needLiveStoryMark:(BOOL)a1 nickname:(id)a2 tag:(id)a3 roomID:(id)a4 userID:(id)a5;
- (BOOL)showLiveMarkWithRoomID:(id)a0 userID:(id)a1;
- (void)onAuthorInfoTapped;
- (void)setupViewStyleWithConfig:(id)a0;
- (void)updateWithAvatarImageUrlList:(id)a0 nickname:(id)a1 tag:(id)a2;
- (void).cxx_destruct;
- (void)layoutView;
- (void)setupView;

@end
