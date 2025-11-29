@class UIView, NSString, NSArray, BDSCLocalCastOptionView, BDSCSearchNoDeviceGuideModel, NSMutableArray, UILabel, UIScrollView;

@interface BDSCSearchNoDeviceGuideView : UIView <UIScrollViewDelegate, BDSCSearchDeviceNoDeviceViewProtocol>

@property (retain, nonatomic) BDSCLocalCastOptionView *localCastView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *diagnosisContainerView;
@property (retain, nonatomic) UILabel *diagnosisTitleLabel;
@property (retain, nonatomic) NSMutableArray *diagnosisViewArray;
@property (copy, nonatomic) NSArray *diagnosisModelArray;
@property (retain, nonatomic) UILabel *bannerTitleLabel;
@property (retain, nonatomic) BDSCSearchNoDeviceGuideModel *model;
@property (copy, nonatomic) id /* block */ airPlayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLandscape;

- (void)loadLocalCastViewIfNeeded;
- (void)configLocalCastView;
- (void)generateDiagnosisModelArray;
- (id)handleSchemeString:(id)a0 source:(id)a1;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setupSubviews;

@end
