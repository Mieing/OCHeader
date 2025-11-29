@class UIButton, NSString, UIImageView, UIView, UILabel, AWEShareReportButtonContainerView;

@interface AWEShareTokenNoteCardView : AWEShareReflowBaseView <UIGestureRecognizerDelegate, AWEShareTokenNoteCardView>

@property (retain, nonatomic) UIView *sharerContainerView;
@property (retain, nonatomic) AWEShareReportButtonContainerView *reportButtonView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *noteLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *sharerLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) id /* block */ turnToVideoBlock;
@property (copy, nonatomic) id /* block */ turnToSharerBlock;
@property (copy, nonatomic) id /* block */ tapDismissButtonBlock;
@property (copy, nonatomic) id /* block */ tapReportButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportButtonTapped;
- (void)dismissButtonTapped;
- (id)initWithTurnToVideoBlock:(id /* block */)a0 turnToSharerBlock:(id /* block */)a1;
- (void)configWithCover:(id)a0 title:(id)a1 actionTitle:(id)a2 sharerName:(id)a3 message:(id)a4 isWebViewShare:(BOOL)a5;
- (void)showLiveTagLabel:(BOOL)a0;
- (void)goToSharer;
- (void)gotoVideo;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
