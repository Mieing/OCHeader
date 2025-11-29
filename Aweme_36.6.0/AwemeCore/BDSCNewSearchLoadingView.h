@class NSString, UILabel, UIView, BDSCNotFindDeviceGuideView;

@interface BDSCNewSearchLoadingView : UIView <BDSCSearchDeviceLoadingViewProtocol, BDSCSearchDeviceNoDeviceViewProtocol>

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UILabel *tipsTitleLabel;
@property (retain, nonatomic) BDSCNotFindDeviceGuideView *tipContainer;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isLandscape:(BOOL)a1 loadingView:(id)a2 isLandscapeStream:(BOOL)a3;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)stopLoading;
- (void)setupSubviews;

@end
