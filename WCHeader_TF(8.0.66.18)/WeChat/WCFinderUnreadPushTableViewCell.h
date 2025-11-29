@class MMUILabel, MMSessionInfo, MMUIButton, MMHeadImageView;

@interface WCFinderUnreadPushTableViewCell : MMTableViewCell

@property (weak, nonatomic) MMUILabel *subTitleLabel;
@property (weak, nonatomic) MMUILabel *greenLabel;
@property (weak, nonatomic) MMUIButton *closeButton;
@property (weak, nonatomic) MMUILabel *titleLabel;
@property (weak, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMSessionInfo *sessionInfo;
@property (weak, nonatomic) MMUILabel *firstLabel;
@property (weak, nonatomic) MMUILabel *secondLabel;
@property (copy, nonatomic) id /* block */ closeAction;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithSessionInfo:(id)a0;
- (void)updateLayout;
- (void)setupUI;
- (void)closeFinderUnreadMsg:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
