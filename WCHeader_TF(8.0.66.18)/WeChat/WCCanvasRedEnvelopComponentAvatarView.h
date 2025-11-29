@class NSString, CContact, UILabel, MMHeadImageView;

@interface WCCanvasRedEnvelopComponentAvatarView : UIView

@property (retain, nonatomic) NSString *senderUserName;
@property (retain, nonatomic) NSString *senderNickName;
@property (retain, nonatomic) CContact *senderContact;
@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) UILabel *nameView;
@property (retain, nonatomic) UILabel *tailView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 senderUserName:(id)a1 senderNickName:(id)a2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
