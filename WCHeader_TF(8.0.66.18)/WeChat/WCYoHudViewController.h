@class UIButton, NSString, UIImageView, UILabel, WCYoAvatarView, UIView;

@interface WCYoHudViewController : MMUIViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) WCYoAvatarView *avatarView;
@property (retain, nonatomic) UIImageView *checkedMaskView;
@property (retain, nonatomic) UIButton *replyButton;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long count;
@property (nonatomic) int yoType;
@property (nonatomic) unsigned int yoTime;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)changeUIWithYoType:(int)a0;
- (void)setupYoWithCount:(unsigned long long)a0 username:(id)a1 type:(int)a2;
- (void)setupYoWithCount:(unsigned long long)a0 username:(id)a1 type:(int)a2 nameLabelString:(id)a3 descriptionString:(id)a4 allowReply:(BOOL)a5;
- (void)setupYoWithCount:(unsigned long long)a0 username:(id)a1 type:(int)a2 nameLabelString:(id)a3 descriptionString:(id)a4 timeString:(id)a5 allowReply:(BOOL)a6;
- (void)doAvatarBounceAnimation;
- (void)didTapReplyButton:(id)a0;
- (void)didTapAvatarView:(id)a0;
- (void)addYoCount:(unsigned long long)a0 forUsername:(id)a1 type:(int)a2;
- (void)refreshDescriptionTime;
- (void).cxx_destruct;

@end
