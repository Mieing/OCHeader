@class UILabel, AWEIMDYOfficialDisableStateViewCompress, UIView;

@interface AWEIMDYOfficialTableViewContentCellCompressed : AWEIMDYOfficialTableViewContentCell

@property (retain, nonatomic) UIView *settingArea;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) AWEIMDYOfficialDisableStateViewCompress *disturbViewNew;
@property (retain, nonatomic) AWEIMDYOfficialDisableStateViewCompress *unsubscribeViewNew;

+ (long long)recentSeconds;
+ (BOOL)shouldTruncateJumpArea;
+ (BOOL)isCompressionExpEnabled;
+ (id)identifier;

- (void)awe_themeDidChange:(long long)a0;
- (void)setAvatarHidden:(BOOL)a0;
- (id)unsubscribeView;
- (void)_setupTitleAreaConstraints;
- (id)disturbView;
- (void)configViewHiddenState;
- (void)configCellContentWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void)configAccessibilityInfo;
- (void)setGotoDetailAreaHidden:(BOOL)a0;
- (void)setNoticeTipHidden:(BOOL)a0;
- (void)setUnreadMessagesFollowingViewHidden:(BOOL)a0;
- (void)configGoToDetailArea;
- (void)__resetBGViewBackgroundColor;
- (void)addContentContainerView;
- (void)addSettingLabelAndView;
- (void)configTimeLabel;
- (void)setSettingViewAndLabelHidden;
- (void)setHidden:(BOOL)a0 unhiddenWidth:(double)a1 view:(id)a2;
- (long long)countWanted;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupUI;

@end
