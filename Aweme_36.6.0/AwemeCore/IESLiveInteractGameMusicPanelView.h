@class IESLiveInteractGameMusicPanelModel, NSArray, UILabel, IESLiveKTVOrderPanelCollectionView, UIButton;

@interface IESLiveInteractGameMusicPanelView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (weak, nonatomic) IESLiveInteractGameMusicPanelModel *panelModel;
@property (retain, nonatomic) IESLiveKTVOrderPanelCollectionView *orderPanel;
@property (retain, nonatomic) NSArray *viewModels;
@property (copy, nonatomic) id /* block */ hideCallback;

- (void)didClickBack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 panelModel:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
