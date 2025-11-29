@class UIView, BDPLoadingAnimationView, NSURL, NSDate, BDPUniqueID, UIImageView, UIButton, BDPModel, NSString, UILabel;
@protocol BDPLoadingViewDelegate, BDPRightAgeViewDelegate;

@interface BDPLoadingView_HG : UIView <BDPLoadingViewProtocol> {
    BOOL _animating;
    BOOL _viewSetuped;
    BOOL _needUpdateTipInfo;
    NSString *_tipInfoString;
    UILabel *_percent;
    UILabel *_tipInfo;
    UILabel *_actionInfo;
    UIButton *_actionButton;
    double _tipInfoMargin;
    UILabel *_styleText;
    UIImageView *_customLoadFailIcon;
    UILabel *_gameTipLabel;
    UILabel *_gameTipOne;
    UILabel *_gameTipTwo;
    UIView *_loadingPlatform;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long type;
@property (nonatomic) long long style;
@property (nonatomic) long long state;
@property (retain, nonatomic) BDPModel *appModel;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *name;
@property (retain, nonatomic) BDPLoadingAnimationView *loadingView;
@property (retain, nonatomic) UIButton *odrActionButton;
@property (retain, nonatomic) UILabel *odrProgressTipInfo;
@property (retain, nonatomic) UIView *customLoadingView;
@property (retain, nonatomic) UIButton *rightAgeBtn;
@property (retain, nonatomic) NSURL *rightAgeBtnIconURL;
@property (nonatomic) BOOL hasShowODRLoadingProgressPromptLaunchContent;
@property (retain, nonatomic) NSDate *lastUpdateODRLoadingProgressPromptTime;
@property (nonatomic) BOOL hasShowUnityHintText;
@property (retain, nonatomic) UIImageView *newLoadingPlatform;
@property (weak, nonatomic) id<BDPLoadingViewDelegate> delegate;
@property (weak, nonatomic) id<BDPRightAgeViewDelegate> rightAgeViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCurrentSmallScreen;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 delegate:(id)a2 style:(long long)a3 uniqueID:(id)a4 customLoadingView:(id)a5;
- (void)changeToFailState:(long long)a0 withTipInfo:(id)a1;
- (void)updateLoadPercent:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 delegate:(id)a2 uniqueID:(id)a3 customLoadingView:(id)a4;
- (void)updateAppModel:(id)a0;
- (void)actionButtonClick:(id)a0;
- (void)updateRightAgeIconURL:(id)a0;
- (void)buildLoadingViewForInternal;
- (id)generateLoadingPlatformView;
- (void)rightAgeBtnClickHandler;
- (void)updateProgressTipInfoWithPercent:(double)a0;
- (void)updateActionButtonWithState:(long long)a0;
- (void)updateProgressTipInfoWithContent:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutSubviews;

@end
