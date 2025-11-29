@class UIView, NSString, IESIMAnimatedButton, AWEIMShareDataModel, UIImageView, UIButton, AWEIMGroupShareCommandMessageProps, UILabel, AWEIMGroupShareCommandAvatarView;

@interface AWEIMGroupShareCommandMessageView : UIView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEIMGroupShareCommandAvatarView *avatarView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *commandLabel;
@property (retain, nonatomic) UILabel *tokenLabel;
@property (retain, nonatomic) IESIMAnimatedButton *retryButton;
@property (retain, nonatomic) UIView *squareCardView;
@property (retain, nonatomic) IESIMAnimatedButton *shareButton;
@property (retain, nonatomic) UIImageView *squareImageView;
@property (copy, nonatomic) NSString *pasteDescription;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long fetchStatus;
@property (retain, nonatomic) AWEIMShareDataModel *shareData;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSString *groupOwnerID;
@property (retain, nonatomic) AWEIMGroupShareCommandMessageProps *props;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_closeButtonTapped;
- (void)p_shareButtonTapped;
- (void)p_retryButtonTapped;
- (void)p_initSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
