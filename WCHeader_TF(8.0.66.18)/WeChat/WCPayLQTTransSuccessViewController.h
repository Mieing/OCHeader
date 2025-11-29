@class NSString;
@protocol WCPayLQTTransSuccessViewControllerDelegate;

@interface WCPayLQTTransSuccessViewController : WCPayBaseViewController <ILinkEventExt>

@property (weak, nonatomic) id<WCPayLQTTransSuccessViewControllerDelegate> delegate;
@property (nonatomic) BOOL hasResportGuideCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupContentView;
- (BOOL)hasLQTCell;
- (BOOL)hasUpgradeLink;
- (void)tapOnPlanCell;
- (void)confirmBtnClick;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)reportGuideCellExposureInfo;
- (void).cxx_destruct;

@end
