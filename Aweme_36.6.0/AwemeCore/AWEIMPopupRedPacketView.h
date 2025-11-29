@class AWEIMPopupRedPacketStatusModel, UIImageView, UILabel, UIButton;

@interface AWEIMPopupRedPacketView : UIView

@property (retain, nonatomic) UIImageView *redPacketTopPartView;
@property (retain, nonatomic) UIImageView *redPacketBottomPartView;
@property (retain, nonatomic) UIImageView *coverGirdleView;
@property (retain, nonatomic) UILabel *greetingsLabel;
@property (retain, nonatomic) UIImageView *senderAvatarView;
@property (retain, nonatomic) UILabel *redPacketInfoLabel;
@property (retain, nonatomic) UIButton *openButton;
@property (retain, nonatomic) UILabel *hasJoinedTips;
@property (retain, nonatomic) UILabel *checkDetailLabel;
@property (retain, nonatomic) AWEIMPopupRedPacketStatusModel *statusModel;
@property (nonatomic) BOOL componentInteractionControl;
@property (copy, nonatomic) id /* block */ openRedPacketHandler;
@property (nonatomic) long long enterFromType;

+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;

- (void)configModel:(id)a0;
- (id)aAWEMainModuleDOUYINLiteAdapter;
- (void)changeComponentsUserInteractionEnabled;
- (void)addBreathAnimationOnButton;
- (void)openRedPacket;
- (void)executeOpenButtonAppearAnimation;
- (void)executeLabelAppearAnimation;
- (void)executeRedPacketUpDownMoveDisappearAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)updateUI;

@end
