@class AWEPlayletSchemaModel, NSDictionary, AWEPlayletPanelRecommendAnnieXCardView;
@protocol AWEDiscoverDPlayletPanelDelegate, AnnieXCardModelProtocol;

@interface AWEPlayletPanelRecommendCardViewController : UIViewController

@property (retain, nonatomic) AWEPlayletPanelRecommendAnnieXCardView *lynxView;
@property (retain, nonatomic) AWEPlayletSchemaModel *schemaModel;
@property (retain, nonatomic) NSDictionary *schemaLogExtras;
@property (weak, nonatomic) id<AWEDiscoverDPlayletPanelDelegate> delegate;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;

- (id)initWithSchemaModel:(id)a0 delegate:(id)a1;
- (void)updatePanelUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
