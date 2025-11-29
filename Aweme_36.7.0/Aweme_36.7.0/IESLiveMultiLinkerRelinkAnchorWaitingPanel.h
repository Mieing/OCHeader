@class UILabel, NSArray, NSMutableArray;

@interface IESLiveMultiLinkerRelinkAnchorWaitingPanel : HTSLivePopUpView

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSArray *invitedUsers;
@property (retain, nonatomic) NSMutableArray *playerItemViews;
@property (copy, nonatomic) id /* block */ cancelActionBlock;

- (void)setupBaseView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1 invitedUsersArray:(id)a2;
- (void).cxx_destruct;
- (void)didTapCancelButton;

@end
