@class NSArray, IESECLiveCardSizeComponentModel, NSString, UITableView;

@interface IESECLiveGoodsInfoCardView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESECLiveCardSizeComponentModel *infoModel;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *cellModelArray;
@property (nonatomic) double cellHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)centerPadding;
- (id)initWithExtendTableModel:(id)a0;
- (void)setupDataWithTableModel:(id)a0;
- (id)arrayDataForDict:(id)a0;
- (double)getPadding:(id)a0 defaultPadding:(double)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;
- (void)setupData;
- (double)leftPadding;
- (double)rightPadding;

@end
