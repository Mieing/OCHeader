@class MMCPLabel, MMUIView, WCStoryComment, MMHeadImageView;

@interface WCStoryFriendVisitTableViewCell : MMTableViewCell

@property (retain, nonatomic) WCStoryComment *comment;
@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) MMUIView *headBackGroundView;
@property (retain, nonatomic) MMCPLabel *nickNameLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;
- (void)customLayoutSubviews;
- (void)onHeadImageViewDidClick:(id)a0;
- (void).cxx_destruct;

@end
