@class MASConstraint, NSString, UIImageView, AWEAwemeModel, UILabel, UIView, AWEDCFeedPageContext;

@interface AWEMVCardAvatarNickNameResource : NSObject <AWEMVCardViewResourceProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *userAvatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (copy) id /* block */ showAvatarImageBlock;
@property (retain, nonatomic) UILabel *publishTimeLabel;
@property (weak, nonatomic) MASConstraint *userNameCenterConstraint;
@property (weak, nonatomic) MASConstraint *userNameTopConstraint;
@property (weak, nonatomic) MASConstraint *userNameBottomConstraint;
@property (nonatomic) double prevAvatarSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)themeDidChange:(long long)a0;
- (void)loadUserAvatarImage;
- (double)userAvatarSize;
- (id)userNameLabelColor;
- (id)initWithContext:(id)a0 model:(id)a1;
- (void)refreshWithAwemeModel:(id)a0 context:(id)a1 containerElement:(id)a2;
- (id)cardLeftBottomUIConfigModel;
- (void)updateLayoutIfNeeded;
- (void).cxx_destruct;
- (void)reset;
- (void)setupViews;
- (void)updateUI;

@end
