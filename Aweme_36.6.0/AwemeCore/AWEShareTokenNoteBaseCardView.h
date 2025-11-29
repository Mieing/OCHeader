@class AWEShareTokenNoteCardConfigModel, NSString, UIImageView, AWEButton, UILabel, UIView, UIButton;

@interface AWEShareTokenNoteBaseCardView : AWEShareReflowBaseView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIImageView *sharerAvatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *noteLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIImageView *arrowReportImageView;
@property (retain, nonatomic) AWEButton *reportButton;
@property (retain, nonatomic) UILabel *sharerLabel;
@property (retain, nonatomic) UILabel *sharerView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) UIView *sharerContainerView;
@property (retain, nonatomic) UIView *reportContainerView;
@property (retain, nonatomic) AWEShareTokenNoteCardConfigModel *configModel;
@property (copy, nonatomic) id /* block */ reshowCardViewBlock;
@property (copy, nonatomic) id /* block */ turnToSharerBlock;
@property (copy, nonatomic) id /* block */ tapDismissButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDummyAlert;
- (void)dismissButtonTapped;
- (void)chooseReportOrNot;
- (void)goToSharer;
- (id)initWithModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)setupUI;

@end
