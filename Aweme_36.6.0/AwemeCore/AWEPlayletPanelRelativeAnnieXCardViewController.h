@class AWEPlayletPanelRelativeAnnieXCardView, AWEPlayletSchemaModel, NSDictionary, AWEPlayletInfoModel;
@protocol AWEDiscoverDPlayletBasePanelDelegate, AnnieXCardModelProtocol;

@interface AWEPlayletPanelRelativeAnnieXCardViewController : UIViewController

@property (retain, nonatomic) AWEPlayletPanelRelativeAnnieXCardView *lynxView;
@property (retain, nonatomic) AWEPlayletSchemaModel *schemaModel;
@property (retain, nonatomic) NSDictionary *schemaLogExtras;
@property (weak, nonatomic) id<AWEDiscoverDPlayletBasePanelDelegate> delegate;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) AWEPlayletInfoModel *playletInfoModel;

- (void)updatePanelUIWithPlayletId:(id)a0;
- (id)initWithSchemaModel:(id)a0 delegate:(id)a1 playletInfoModel:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
