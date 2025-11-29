@class AWEIMDYOfficialDisableStateView, UILabel, AWENotificationModelNew, UIButton, UIView, AWEIMDYOfficialContentCardView, AWEIMDYUnreadMessagesFollowingView, NSString, AWEIMDYOfficialActionCardView, UIStackView, AWENoticeYYLabel, AWEIMDYOfficialTableViewContext, UIImageView;
@protocol AWEIMDYOfficialTableViewContentImageCellDelegate;

@interface AWEIMDYOfficialTableViewContentCell : UITableViewCell <AWEIMDYOfficialContentCardViewDelegate, AWEIMNoticeCellDetailAreaDelegate>

@property (retain, nonatomic) AWEIMDYOfficialTableViewContext *context;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *unreadDotView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *noticeStateImageView;
@property (retain, nonatomic) AWEIMDYOfficialDisableStateView *unsubscribeView;
@property (retain, nonatomic) AWEIMDYOfficialDisableStateView *disturbView;
@property (retain, nonatomic) UIImageView *settingView;
@property (retain, nonatomic) UILabel *settingLabel;
@property (retain, nonatomic) UIView *avatarSeparateLine;
@property (retain, nonatomic) AWEIMDYOfficialContentCardView *contentContainerView;
@property (retain, nonatomic) AWEIMDYOfficialActionCardView *actionCardView;
@property (retain, nonatomic) UIStackView *detailAreaStackView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UIButton *highlightTipView;
@property (retain, nonatomic) AWENoticeYYLabel *disturbRemindLabel;
@property (retain, nonatomic) AWEIMDYUnreadMessagesFollowingView *unreadMessagesFollowingView;
@property (nonatomic) BOOL needTrackEvent;
@property (retain, nonatomic) AWENotificationModelNew *model;
@property (retain, nonatomic) UIStackView *titleAreaStackView;
@property (weak, nonatomic) id<AWEIMDYOfficialTableViewContentImageCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasOpenHideUnreadDotViewTest;
+ (BOOL)enableNoticeCardOptimize;
+ (id)identifier;

- (void)setAvatarHidden:(BOOL)a0;
- (void)onSettingTap;
- (void)onGotoDetailCustomAction:(id)a0;
- (void)onNoticeTextUnfoldClick:(BOOL)a0;
- (void)configWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void)_setupTitleAreaConstraints;
- (void)onCellLongPress:(id)a0;
- (void)configViewHiddenState;
- (void)configCellContentWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void)configAccessibilityInfo;
- (void)setHidden:(BOOL)a0 unhiddenHeight:(double)a1 view:(id)a2;
- (void)setGotoDetailAreaHidden:(BOOL)a0;
- (BOOL)shouldHideNoticeTip;
- (void)setNoticeTipHidden:(BOOL)a0;
- (BOOL)shouldHideNoticeStateImageView;
- (BOOL)shouldHideUnsubscribeView;
- (BOOL)shouldHideDisturbView;
- (BOOL)shouldHideUnreadMessagesFollowingView;
- (void)setUnreadMessagesFollowingViewHidden:(BOOL)a0;
- (BOOL)shouldHideUnreadDotView;
- (BOOL)shouldHideHighlightTipView;
- (void)configContentContainerView;
- (void)configAvatarView;
- (void)configDisturbRemindLabel;
- (void)configGoToDetailArea;
- (void)configHighlightTipView;
- (void)onTapMuteHint;
- (id)safeAddString:(id)a0 toString:(id)a1;
- (void)onGotoDetailTap:(id)a0;
- (unsigned long long)settingViewStyle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupUI;

@end
