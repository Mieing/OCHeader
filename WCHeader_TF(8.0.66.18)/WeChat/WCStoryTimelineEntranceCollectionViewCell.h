@class MMCPLabel, NSString, UILabel, UIView, MMHeadImageView;

@interface WCStoryTimelineEntranceCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *headBackGroundView;
@property (retain, nonatomic) UILabel *blueTipView;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMCPLabel *nickNameLabel;
@property (retain, nonatomic) NSString *userName;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setUserName:(id)a0 hasUnreadComment:(BOOL)a1 unreadCommentCount:(unsigned long long)a2;
- (void)layoutCustomSubViews;
- (void).cxx_destruct;

@end
