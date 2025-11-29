@class UIView, IESLiveSoloKTVOrderPanelModel, IESLiveKTVOrderPanelCollectionView;

@interface IESLiveSoloKTVMySungView : UIView

@property (retain, nonatomic) IESLiveSoloKTVOrderPanelModel *panelModel;
@property (retain, nonatomic) IESLiveKTVOrderPanelCollectionView *collectionView;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ clickedBackAction;

- (void)didClickBack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 panelModel:(id)a1;
- (id)getPanelModelArray;
- (void).cxx_destruct;
- (void)setupUI;

@end
