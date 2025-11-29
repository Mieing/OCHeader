@class AFDRecommendPanelModel, AWEAwemeModel;

@interface AFDRecommendPanelDataController : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AFDRecommendPanelModel *model;

- (id)getPanelModel;
- (id)getPanelUserList:(id)a0;
- (id)generateItemModelWithModel:(id)a0;
- (id)initWtihAwemeModel:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
