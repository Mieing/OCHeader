@class NSString, AWEProfileSocialStatisticConfig, UILabel, UIView, NSNumber;

@interface AWEProfileSocialStatisticView : UIView <AWEProfileFriendEntranceMovePopoverAlertHostViewProtocol>

@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) UILabel *fansLabel;
@property (retain, nonatomic) UILabel *praiseLabel;
@property (retain, nonatomic) UILabel *friendLabel;
@property (retain, nonatomic) UILabel *followPrefixBtn;
@property (retain, nonatomic) UILabel *fansPrefixBtn;
@property (retain, nonatomic) UILabel *praisePrefixBtn;
@property (retain, nonatomic) UILabel *friendPrefixBtn;
@property (retain, nonatomic) UIView *followContainerView;
@property (retain, nonatomic) UIView *fansContainerView;
@property (retain, nonatomic) UIView *praiseContainerView;
@property (retain, nonatomic) UIView *friendContainerView;
@property (nonatomic) long long friendType;
@property (retain, nonatomic) AWEProfileSocialStatisticConfig *config;
@property (retain, nonatomic) UIView *followAccessView;
@property (retain, nonatomic) UIView *fansAccessView;
@property (retain, nonatomic) UIView *praiseAccessView;
@property (retain, nonatomic) UIView *friendAccessView;
@property (retain, nonatomic) NSNumber *followingCount;
@property (retain, nonatomic) NSNumber *fansCount;
@property (retain, nonatomic) NSNumber *praiseCount;
@property (retain, nonatomic) NSNumber *friendCount;
@property (nonatomic) BOOL canShowFriendsLabel;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isCompanyUser;
@property (nonatomic) BOOL isTeenModeOn;
@property (nonatomic) BOOL hasUserMood;
@property (nonatomic) double containerWidth;
@property (nonatomic) double labelFont;
@property (nonatomic) double buttonFont;
@property (nonatomic) double gap;
@property (copy, nonatomic) id /* block */ followClickedBlock;
@property (copy, nonatomic) id /* block */ fansClickedBlock;
@property (copy, nonatomic) id /* block */ praiseClickedBlock;
@property (copy, nonatomic) id /* block */ friendClickedBlock;
@property (copy, nonatomic) id /* block */ blankClickedBlock;
@property (nonatomic) BOOL shouldLimitFansCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)limitCountFansTextWithFontSize:(double)a0;

- (void)p_setUpUI;
- (void)p_updateSocialStatisticContent:(BOOL)a0;
- (id)mateEntranceView;
- (id)mutualEntranceView;
- (void)updateFollowBtnTitle:(id)a0;
- (void)updateAllLabelTextColor:(BOOL)a0;
- (void)updateAllStatisticLabelHidden:(BOOL)a0;
- (void)updateFansLabel:(id)a0 isLoaded:(BOOL)a1;
- (void)updateFollowLabel:(id)a0 isLoaded:(BOOL)a1;
- (void)updateFriendsLabel:(id)a0 isLoaded:(BOOL)a1;
- (void)updatePraiseLabel:(id)a0 isLoaded:(BOOL)a1;
- (void)handleTapGestureRecognizerWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)initFontSize;
- (void)setFontFitScreen;
- (id)fansAttributedTextWith:(BOOL)a0 numberSize:(double)a1;
- (id)praiseAttributedTextWith:(BOOL)a0 numberSize:(double)a1;
- (void)calibrateFontSizeAndGapIfNeeded:(double)a0;
- (void)updateUIWithResetView:(BOOL)a0;
- (void)updateFriendPrefixBtnTitle:(id)a0;
- (void)setFontSizeWithNumberSize:(double)a0 btnFontSize:(double)a1;
- (double)computeLabelsFullWidthWithFontSize:(double)a0 btnFontSize:(double)a1;
- (void)changeLabelInTeenMode:(BOOL)a0;
- (void)updateFollowLabelTitle:(id)a0;
- (BOOL)compareWidthWithLabel:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)handleTapGestureRecognizer:(id)a0;

@end
