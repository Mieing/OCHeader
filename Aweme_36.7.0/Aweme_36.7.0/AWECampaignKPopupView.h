@class UIView, NSString, AWEButton, UIImageView, UIButton, AWECampaignKPopupModel, UIViewController, UILabel, NSNumber;

@interface AWECampaignKPopupView : UIView <AWEUGActivityPopupViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEButton *actionButton;
@property (retain, nonatomic) UILabel *actionTitleLabel;
@property (retain, nonatomic) UIButton *subButton;
@property (retain, nonatomic) AWECampaignKPopupModel *model;
@property (copy, nonatomic) NSString *imgCacheName;
@property (weak, nonatomic) UIViewController *topViewController;
@property (retain, nonatomic) NSNumber *activityStartTime;
@property (copy, nonatomic) id /* block */ actionButtonBlock;
@property (copy, nonatomic) id /* block */ subButtonBlock;
@property (copy, nonatomic) id /* block */ closeButtonBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupViewWithModel:(id)a0 imgCacheName:(id)a1 activityStartTime:(id)a2;

- (void)configViews;
- (void)updateUIWithModel:(id)a0;
- (void)addTokenToSlardar;
- (void)removeTokenFromSlardar;
- (void)onTapContainer:(id)a0;
- (id)initWithTask:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)showWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismiss:(id /* block */)a0;

@end
