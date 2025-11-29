@class NSString;

@interface AWELastAccountLoginCompactView : AWELastAccountLoginBaseView <AWEUserLoginDifferentiatingThemeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserLoginThemeAdapterClass;

- (id)guideLabel;
- (void)setupUIWithMultiAccount:(BOOL)a0;
- (id)aAWEUserLoginThemeAdapter;
- (id)loginAvatarView;
- (id)loginActionButton;
- (id)loginTitleLabel;
- (id)loginNicknameLabel;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)loginContainerView;

@end
