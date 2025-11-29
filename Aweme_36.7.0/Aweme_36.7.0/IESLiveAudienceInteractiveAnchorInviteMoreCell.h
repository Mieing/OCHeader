@class UIButton, UILabel, NSString;

@interface IESLiveAudienceInteractiveAnchorInviteMoreCell : UICollectionViewCell <IESLiveAudienceInteractiveAnchorInviteCellAccessibilityProtocol>

@property (retain, nonatomic) UIButton *inviteMoreBtn;
@property (retain, nonatomic) UILabel *moreLabel;
@property (copy, nonatomic) id /* block */ inviteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareAccessibility;
- (void)p_didTapInviteMoreBtn;
- (void)updateInviteMoreBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
