@class UIImageView, DYLoginNextActionButton, UILabel, UIView, DUXTextTag;

@interface AWETrustAccountSingleView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nickLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *nickView;
@property (retain, nonatomic) DUXTextTag *lastLoginTag;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (void)stopLoadingWithError:(id)a0;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)setupUIWithUser:(id)a0 showLastTag:(BOOL)a1 isHalfScreen:(BOOL)a2;
- (id)initWithUser:(id)a0 showLastTag:(BOOL)a1 isHalfScreen:(BOOL)a2;
- (void)willShowAnimationIsLogin:(BOOL)a0;
- (void).cxx_destruct;

@end
