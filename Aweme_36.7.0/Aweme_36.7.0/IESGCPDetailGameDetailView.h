@class UIStackView, IESGCPDetailImageCollectionView, IESGCPReserveGameLaunchTimeView, NSString, UIView, IESGCPDetailGameAwardsView, IESGCPFoldLabel;

@interface IESGCPDetailGameDetailView : IESGCPDetailBaseView <IESGCPFoldLabelDelegate, IESGCPDetailImageCollectionViewDelegate, IESGCPDetailGameAwardsViewDelegate, IESGCPDIContextSubscriber>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) IESGCPFoldLabel *foldLabel;
@property (retain, nonatomic) IESGCPDetailImageCollectionView *imageCollectionView;
@property (retain, nonatomic) IESGCPDetailGameAwardsView *gameAwardsView;
@property (retain, nonatomic) IESGCPReserveGameLaunchTimeView *reserveGameLaunchTimeView;
@property (nonatomic) BOOL hasReportExposeLabelNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)viewExposed;
- (void)updateLabelHeight;
- (void)foldLabel:(id)a0 didChangeFoldStatus:(BOOL)a1;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
