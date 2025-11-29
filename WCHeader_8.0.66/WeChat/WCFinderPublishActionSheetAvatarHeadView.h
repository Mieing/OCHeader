@class MMUIButton, WCFinderHeadImageView, UILabel, UIView, WCFinderContact;

@interface WCFinderPublishActionSheetAvatarHeadView : MMUIView

@property (retain, nonatomic) UILabel *headTips;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (weak, nonatomic) UIView *contactContainerView;
@property (retain, nonatomic) WCFinderContact *contact;
@property (weak, nonatomic) MMUIButton *brandLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
