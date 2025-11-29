@class MultiTalkHDHeadView, UILabel, ilinkConfSDKMember, UIView;

@interface ilinkMultiTalkMsgCell : MMBaseMultiMenuTableViewCell

@property (retain, nonatomic) MultiTalkHDHeadView *headImageView;
@property (retain, nonatomic) UILabel *userNameLable;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) ilinkConfSDKMember *member;
@property (retain, nonatomic) UIView *lineView;

- (void)updateContentWithMsgContact:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
