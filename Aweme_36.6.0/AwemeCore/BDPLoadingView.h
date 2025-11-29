@class UIView, NSString, BDPLoadingAnimationView, BDPUniqueID, BDPImageView, UIButton, BDPModel, UIImageView, UILabel;
@protocol BDPLoadingViewDelegate, BDPRightAgeViewDelegate;

@interface BDPLoadingView : UIView <BDPLoadingViewProtocol> {
    BOOL _animating;
    BOOL _viewSetuped;
    BOOL _needUpdateTipInfo;
    NSString *_tipInfoString;
    UILabel *_tipInfo;
    UILabel *_actionInfo;
    UIButton *_actionButton;
    double _tipInfoMargin;
    UILabel *_styleText;
    UIImageView *_customLoadFailIcon;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long type;
@property (nonatomic) long long style;
@property (nonatomic) long long state;
@property (retain, nonatomic) BDPModel *appModel;
@property (retain, nonatomic) BDPImageView *icon;
@property (retain, nonatomic) UILabel *name;
@property (retain, nonatomic) BDPLoadingAnimationView *loadingView;
@property (retain, nonatomic) UIView *customLoadingView;
@property (weak, nonatomic) id<BDPLoadingViewDelegate> delegate;
@property (weak, nonatomic) id<BDPRightAgeViewDelegate> rightAgeViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 delegate:(id)a2 style:(long long)a3 uniqueID:(id)a4 customLoadingView:(id)a5;
- (void)changeToFailState:(long long)a0 withTipInfo:(id)a1;
- (void)updateLoadPercent:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 delegate:(id)a2 uniqueID:(id)a3 customLoadingView:(id)a4;
- (void)updateAppModel:(id)a0;
- (void)actionButtonClick:(id)a0;
- (void)diagnoseAction;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutSubviews;

@end
