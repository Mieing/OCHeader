@class UIImageView, UILabel, NSString;

@interface IESLivePresentTicketFromPersonInfoView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *chatBubbleImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (copy, nonatomic) NSString *nameString;
@property (copy, nonatomic) NSString *infoString;
@property (nonatomic) BOOL hasGot;

- (void)reloadUIForHasGotTicket:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
