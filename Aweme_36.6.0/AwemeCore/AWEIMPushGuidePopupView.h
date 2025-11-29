@class NSArray, UIImageView, UILabel, UIView, UIButton;

@interface AWEIMPushGuidePopupView : AWEIMBasePopupView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (readonly, nonatomic) unsigned long long viewStyle;
@property (readonly, nonatomic) unsigned long long buttonStyle;
@property (copy, nonatomic) NSArray *avatarList;
@property (retain, nonatomic) UIView *messageAvatarContainerView;
@property (retain, nonatomic) UIView *friendAvatarContainerView;

+ (BOOL)isDisplaying;

- (void)p_setupViews;
- (void)hideWithDuration:(double)a0;
- (void)p_onClickCancel;
- (void)p_onClickConfirm;
- (id)initWithViewStyle:(unsigned long long)a0 buttonStyle:(unsigned long long)a1;
- (void)p_openReceivePushOnlyFromFrendsSwitch;
- (void)p_updateViews;
- (void)p_createFriendTopAvatarListView;
- (void)p_createIMTopAvatarListView;
- (id)initWithViewStyle:(unsigned long long)a0 buttonStyle:(unsigned long long)a1 friendsAvatarlist:(id)a2;
- (void).cxx_destruct;
- (void)show;

@end
