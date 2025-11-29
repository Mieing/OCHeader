@class IESLivePublicScreenInfoModel, NSString, UIImageView, UIView, UILabel, IESLiveChatChannelLandscapeEntryDoubleAvatar;

@interface IESLiveChatChannelLandscapeEntryView : UIImageView

@property (retain, nonatomic) UIImageView *singleAvatar;
@property (retain, nonatomic) IESLiveChatChannelLandscapeEntryDoubleAvatar *doubleAvatar;
@property (retain, nonatomic) UIView *statusContainer;
@property (retain, nonatomic) UIImageView *bubbleStatusIcon;
@property (retain, nonatomic) UIImageView *mentionStatusIcon;
@property (retain, nonatomic) UIView *unreadTipContainer;
@property (retain, nonatomic) UILabel *unreadLabel;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *currentInfoModel;
@property (nonatomic) long long currentStatus;
@property (nonatomic) BOOL hasUnreadCount;
@property (nonatomic) BOOL hasMention;
@property (nonatomic) BOOL needDrawMask;
@property (copy, nonatomic) NSString *accessAbilityString;
@property (copy, nonatomic) id /* block */ accessAbilityDidChanged;

- (void)configWithTopUserArray:(id)a0 channelID:(id)a1;
- (void)updateWithPublicSreenInfoModel:(id)a0 hasMention:(BOOL)a1;
- (id)currentAccessAbilityString;
- (void)refreshMetionStatus:(BOOL)a0;
- (void)refreshUnreadCount:(unsigned long long)a0;
- (void)resetDefaultStatus;
- (void)configWithTopUserArray:(id)a0;
- (void)updateAvatarHiddenStautsWithUsers:(id)a0;
- (void)refreshTipStatus;
- (void)switchAvatarShowStatus:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
