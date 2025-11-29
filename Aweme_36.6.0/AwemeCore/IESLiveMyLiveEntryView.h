@class HTSLiveAvatarImageView, HTSLiveUser;

@interface IESLiveMyLiveEntryView : UIButton

@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) HTSLiveAvatarImageView *avatarImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 user:(id)a1;
- (void)loadAvatarAndBorder;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;
- (void)updateUser:(id)a0;

@end
