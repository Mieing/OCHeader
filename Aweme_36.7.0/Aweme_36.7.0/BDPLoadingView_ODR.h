@class UIView, NSString, BDPUniqueID, UIButton, BDPModel, BDPCircleProgressView, BDPLoadingIconView, UILabel;
@protocol BDPLoadingViewDelegate, BDPRightAgeViewDelegate;

@interface BDPLoadingView_ODR : UIView <BDPLoadingViewProtocol> {
    BOOL _animating;
    BOOL _viewSetuped;
    BOOL _needUpdateTipInfo;
    BOOL _isLoadingForAI;
    NSString *_tipInfoString;
    UILabel *_tipInfoLabel;
    UIButton *_actionButton;
    UIView *_feedbackView;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (retain, nonatomic) BDPModel *appModel;
@property (retain, nonatomic) BDPLoadingIconView *iconImageView;
@property (retain, nonatomic) BDPCircleProgressView *circleProgressView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) id<BDPLoadingViewDelegate> delegate;
@property (readonly, nonatomic) long long style;
@property (weak, nonatomic) id<BDPRightAgeViewDelegate> rightAgeViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCloseButton:(id)a0;
- (void)feedbackAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 delegate:(id)a2 style:(long long)a3 uniqueID:(id)a4 customLoadingView:(id)a5;
- (void)changeToFailState:(long long)a0 withTipInfo:(id)a1;
- (void)updateLoadPercent:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 delegate:(id)a2 uniqueID:(id)a3 customLoadingView:(id)a4;
- (void)adjustLoadingStyleForAI:(BOOL)a0;
- (void)updateAppModel:(id)a0;
- (void)actionButtonClick:(id)a0;
- (void)diagnoseAction;
- (void)tapTipInfoAction;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutSubviews;

@end
