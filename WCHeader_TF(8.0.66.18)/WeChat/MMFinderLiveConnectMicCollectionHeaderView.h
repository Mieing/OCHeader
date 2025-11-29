@class MMUIButton;

@interface MMFinderLiveConnectMicCollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) MMUIButton *inviteAnchorButton;
@property (retain, nonatomic) MMUIButton *randomMatchButton;

+ (id)ReuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeInviteAnchorButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeRandomMatchButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
