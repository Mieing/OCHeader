@class AWEIMUITagLabelViewContainer, UIImageView, UILabel, UIButton;

@interface AWEIMUserLabelTopGreetingMessageTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEIMUITagLabelViewContainer *tagContainerView;
@property (retain, nonatomic) UIButton *profileButton;
@property (nonatomic) BOOL didTrackProfileButtonShow;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)p_refreshUI;
- (void)configWithMessage:(id)a0;
- (id)__setupTagModels;
- (id)__buildTagModel;
- (void)onClickProfileButton:(id)a0;
- (void)transferToProfileWithAdditionalParams:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)avatarTapped:(id)a0;
- (void)willDisplayCell;

@end
