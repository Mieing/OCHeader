@class HTSLiveAvatarImageView, NSString, UIImageView, UILabel;

@interface IESLiveGiftGuestEntityView : UIView

@property (retain, nonatomic) HTSLiveAvatarImageView *avatar;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *checkView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ click;

- (void)setUpWithConfig:(id)a0;
- (void)bindClick;
- (void)setUpDefault;
- (id)initWithDefault;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)tap;

@end
