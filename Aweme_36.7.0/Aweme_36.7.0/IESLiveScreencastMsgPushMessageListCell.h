@class YYLabel;

@interface IESLiveScreencastMsgPushMessageListCell : UITableViewCell

@property (retain, nonatomic) YYLabel *messageLabel;

+ (id)cellReuseIdentifier;

- (void)updateMessageModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupView;

@end
