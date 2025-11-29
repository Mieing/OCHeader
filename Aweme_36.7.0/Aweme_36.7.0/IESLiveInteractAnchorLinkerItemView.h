@class UIButton, UIImageView, IESLiveInteractAnchorLinkerModel, UILabel, CAShapeLayer, UIView;

@interface IESLiveInteractAnchorLinkerItemView : UIView

@property (readonly, nonatomic) IESLiveInteractAnchorLinkerModel *player;
@property (copy, nonatomic) id /* block */ removeAction;
@property (copy, nonatomic) id /* block */ inviteMoreAction;
@property (copy, nonatomic) id /* block */ selectAction;
@property (copy, nonatomic) id /* block */ changeSideAction;
@property (retain, nonatomic) UIImageView *pendingImageView;
@property (retain, nonatomic) UILabel *pendingLabel;
@property (retain, nonatomic) UIImageView *playerAvatarView;
@property (retain, nonatomic) CAShapeLayer *avatarBorderLayer;
@property (retain, nonatomic) CAShapeLayer *playerBorderLayer;
@property (retain, nonatomic) UIView *waitingMaskView;
@property (retain, nonatomic) UILabel *playerStatusLabel;
@property (retain, nonatomic) UIImageView *playerGenderView;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UILabel *playerNicknameLabel;
@property (retain, nonatomic) UIButton *changeActionBtn;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;

- (void)p_removePlayer:(id)a0;
- (void)p_clickInviteMore;
- (void)p_clickSelectAction;
- (void)p_clickChangeAction;
- (id)initWithPlayer:(id)a0 size:(struct CGSize { double x0; double x1; })a1 compactStyle:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
