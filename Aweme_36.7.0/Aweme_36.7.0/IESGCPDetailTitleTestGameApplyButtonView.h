@class UIButton, NSString;

@interface IESGCPDetailTitleTestGameApplyButtonView : IESGCPDetailBaseView <IESGCPDIContextSubscriber>

@property (retain, nonatomic) UIButton *applyButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)makeTrackerNode;
- (void)configButtonStateWithThemeConfig:(id)a0;
- (void)updateApplyButtonState:(unsigned long long)a0;
- (void)applyButtonDidClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)addObservers;

@end
