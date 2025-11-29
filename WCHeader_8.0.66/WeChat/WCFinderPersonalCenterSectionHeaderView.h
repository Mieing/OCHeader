@class WCFinderAccountSelectedButton, NSString, UILabel, MMUIButton, UIButton;
@protocol WCFinderPersonalCenterSectionHeaderViewDelegate;

@interface WCFinderPersonalCenterSectionHeaderView : UICollectionReusableView <WCFinderRedDotNotifyExt>

@property (weak, nonatomic) id<WCFinderPersonalCenterSectionHeaderViewDelegate> delegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *identityHintButton;
@property (retain, nonatomic) WCFinderAccountSelectedButton *accountSelectButton;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIButton *settingButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)headerViewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)enableIdentityHint;
- (void)enableSetting:(id)a0 action:(SEL)a1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)_layoutSettingButton;
- (void)identityHintButtonDidClick;
- (void)selectAccountButtonDidClick;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReload;
- (void).cxx_destruct;

@end
