@class AWEIMMessageConversation, NSString, UIImageView, CAShapeLayer, UILabel, UIView;
@protocol IESIMSettingSwitchProtocol;

@interface AWEIMGroupDetailTableViewCell : UITableViewCell

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *detailIcon;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) NSString *noticeText;
@property (retain, nonatomic) CAShapeLayer *dotLayer;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (retain, nonatomic) UIView<IESIMSettingSwitchProtocol> *aSwitch;

+ (double)heigthOfCellWithCellWidth:(double)a0 conversation:(id)a1 type:(long long)a2;

- (void)switchControlDidChanged:(id)a0;
- (void)__themeChange;
- (void)configWithConversation:(id)a0 type:(long long)a1;
- (id)titleWithCellType;
- (void)changeSwitchValue;
- (void)cellSwitchDidClick;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
