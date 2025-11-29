@class DUXBaseLabel, DUXBaseImageView, UIView;

@interface AWEECOMIMChatListCellV2View : UIView

@property (retain, nonatomic) DUXBaseImageView *avatarView;
@property (retain, nonatomic) DUXBaseLabel *nickNameLabel;
@property (retain, nonatomic) DUXBaseLabel *officialLabel;
@property (retain, nonatomic) DUXBaseLabel *timeLabel;
@property (retain, nonatomic) DUXBaseImageView *sendFailView;
@property (retain, nonatomic) DUXBaseLabel *convHintLabel;
@property (retain, nonatomic) DUXBaseLabel *lastMsgLabel;
@property (retain, nonatomic) DUXBaseImageView *muteView;
@property (retain, nonatomic) UIView *redPointView;
@property (retain, nonatomic) DUXBaseLabel *unReadNumLabel;

+ (double)cellHeight;

- (void)configCellWithModel:(id)a0;
- (void)updateCellUnReadNum:(id)a0;
- (id)generateTimeStrWithLastMessageTime:(long long)a0 dateFormatterType:(long long)a1;
- (void)modifyColorByDarkTheme;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isDarkTheme;

@end
