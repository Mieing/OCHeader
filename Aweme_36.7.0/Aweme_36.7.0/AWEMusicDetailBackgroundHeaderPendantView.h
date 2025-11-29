@class AWEMusicDetailMusicModel, AWEMusicModel, UIView;
@protocol AWEMusicDetailMusicHeaderPendantViewProtocol, AWEVerifiedUserViewProtocol;

@interface AWEMusicDetailBackgroundHeaderPendantView : UIStackView

@property (retain, nonatomic) AWEMusicDetailMusicModel *musicModel;
@property (retain, nonatomic) AWEMusicModel *model;
@property (retain, nonatomic) UIView<AWEMusicDetailMusicHeaderPendantViewProtocol> *challengeGuideView;
@property (retain, nonatomic) UIView<AWEMusicDetailMusicHeaderPendantViewProtocol> *taskLiteEntranceView;
@property (retain, nonatomic) UIView<AWEVerifiedUserViewProtocol> *soleVerifiedUserView;
@property (retain, nonatomic) UIView<AWEVerifiedUserViewProtocol> *verifiedUserViewUnderFollowShoot;
@property (nonatomic) BOOL isNewStyleForInspirationHeaderView;
@property (copy, nonatomic) id /* block */ pauseMusicBlock;
@property (copy, nonatomic) id /* block */ handleShareMusicAction;

+ (id)defaultVerifiedViewLayoutManger;
+ (id)followShootCombinedVerifiedViewLayoutManger;

- (void)awe_themeDidChange:(long long)a0;
- (BOOL)hasChallengeGuideView;
- (BOOL)shouldShowTaskLite;
- (long long)getCurrentMusicianFollowStatus;
- (id)getCurrentMusicianModel;
- (id)initWithIsNewStyleForInspirationHeaderView:(BOOL)a0;
- (void)updateWithMusicModel:(id)a0 musicInfo:(id)a1;
- (BOOL)isMultipleCell;
- (id)verifiedUserViewArray;
- (void)jumpToMatchedPGCMusicDetailPage;
- (BOOL)shouldShowPendentView;
- (double)contentHeight;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupViews;

@end
