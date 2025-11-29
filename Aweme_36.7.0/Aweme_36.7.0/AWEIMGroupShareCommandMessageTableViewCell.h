@class UIView, NSString, AWEIMShareDataModel, UIImageView, AWEAnimatedButton, UIButton, UILabel, AWEIMGroupShareCommandAvatarView;

@interface AWEIMGroupShareCommandMessageTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEIMGroupShareCommandAvatarView *avatarView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *commandLabel;
@property (retain, nonatomic) UILabel *tokenLabel;
@property (retain, nonatomic) AWEAnimatedButton *retryButton;
@property (retain, nonatomic) UIView *squareCardView;
@property (retain, nonatomic) AWEAnimatedButton *shareButton;
@property (retain, nonatomic) UIImageView *squareImageView;
@property (copy, nonatomic) NSString *pasteDescription;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long fetchStatus;
@property (retain, nonatomic) AWEIMShareDataModel *shareData;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSString *groupOwnerID;

+ (double)squareImageViewHeightForMessage:(id)a0;
+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)p_fetchData;
- (void)configWithMessage:(id)a0;
- (void)trackEventWithShowToken;
- (void)p_prepareAndShare;
- (void)__showSharePanel;
- (void)p_closeButtonTapped;
- (id)__tipTitle;
- (id)__btnTitle;
- (void)p_shareButtonTapped;
- (void)p_retryButtonTapped;
- (void).cxx_destruct;
- (void)setupUI;

@end
