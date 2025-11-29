@class UILabel, NSString, UIView, BDSCImageView, BDSCSearchTipView;

@interface BDSCLiveSearchLoadingView : UIView <BDSCSearchDeviceLoadingViewProtocol>

@property (retain, nonatomic) BDSCSearchTipView *tipView;
@property (retain, nonatomic) UIView *tipContainer;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) BDSCImageView *helpIconView;
@property (retain, nonatomic) UILabel *helpLabel;
@property (nonatomic) BOOL isLandscapeStream;
@property (copy, nonatomic) id /* block */ helpClickBlock;
@property (copy, nonatomic) id /* block */ xsgGuideClickBlock;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isLandscape:(BOOL)a1 loadingView:(id)a2 isLandscapeStream:(BOOL)a3;
- (void)didTapHelpLabel;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)stopLoading;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
