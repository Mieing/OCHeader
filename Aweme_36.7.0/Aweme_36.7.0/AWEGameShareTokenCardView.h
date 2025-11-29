@class UIView, NSString, AWEButton, AWEUserModel, UIImageView, UIButton, YYLabel, UILabel;

@interface AWEGameShareTokenCardView : UIView <AWEGameShareTokenCardViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) YYLabel *followLabel;
@property (retain, nonatomic) AWEButton *primaryButton;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (retain, nonatomic) AWEUserModel *shareUser;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isFollowed;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *host;
@property (copy, nonatomic) id /* block */ tapDismissButtonBlock;
@property (copy, nonatomic) id /* block */ tapSharerDetailBlock;
@property (copy, nonatomic) id /* block */ tapSharerCheckBoxBlock;
@property (copy, nonatomic) id /* block */ tapPrimaryButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)followCheckBoxTapped;
- (BOOL)isMicroGame;
- (void)configFollowLabel:(id)a0 needShowFollowAction:(BOOL)a1;
- (void)shareDetailTapped;
- (void)presentMiniAppGame;
- (void)updateWithModel:(id)a0 completion:(id /* block */)a1;
- (id)microTypeTrack;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)closeButtonTapped:(id)a0;
- (void)primaryButtonTapped:(id)a0;

@end
