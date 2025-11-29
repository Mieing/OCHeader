@class UIButton, NSString, UIView;
@protocol AWEIMRTVVoipFriendInviteTableViewCellDelegate;

@interface AWEIMRTVVoipFriendInviteTableViewCell : AWEIMUserTableViewCell <AWEIMRTVSelectUserTableViewCellProtocol>

@property (retain, nonatomic) UIButton *invokeButton;
@property (readonly, nonatomic) UIView *onlineIndicatorView;
@property (weak, nonatomic) id<AWEIMRTVVoipFriendInviteTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)configInviteButton:(id)a0 titleColor:(id)a1 bgColor:(id)a2;
- (BOOL)__isLightStyle;
- (void)__refreshOnlineIndicatorViewWithContext:(id)a0;
- (BOOL)__isValidColorHexString:(id)a0;
- (void)__handleInvokeButtonClick:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
