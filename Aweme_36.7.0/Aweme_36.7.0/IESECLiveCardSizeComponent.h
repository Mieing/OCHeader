@class UIView, IESECLiveSizeInfoHeaderView, IESECLiveCardSizeTableModel, NSString, IESECLiveGoodsBaseModel, UIImageView, IESECLiveGoodsInfoCardView, UITableView, IESECLiveCardSizeComponentModel, IESECLiveGoodsModel, IESECLiveContext;

@interface IESECLiveCardSizeComponent : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESECLiveCardSizeComponentModel *sizeModel;
@property (nonatomic) long long componentType;
@property (retain, nonatomic) IESECLiveGoodsModel *goodsModel;
@property (retain, nonatomic) IESECLiveGoodsBaseModel *goodsBaseModel;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) UIView *actionContainer;
@property (retain, nonatomic) UIImageView *smallImgView;
@property (retain, nonatomic) UIImageView *titleImgView;
@property (retain, nonatomic) UIImageView *indicatorImgView;
@property (retain, nonatomic) UIView *accessibilityView;
@property (retain, nonatomic) IESECLiveSizeInfoHeaderView *categoryHeader;
@property (retain, nonatomic) UITableView *categoryTableView;
@property (retain, nonatomic) IESECLiveCardSizeTableModel *categoryTableModel;
@property (retain, nonatomic) IESECLiveSizeInfoHeaderView *detailHeader;
@property (retain, nonatomic) UITableView *detailTableView;
@property (retain, nonatomic) IESECLiveCardSizeTableModel *detailTableModel;
@property (retain, nonatomic) IESECLiveGoodsInfoCardView *infoCardView;
@property (nonatomic) BOOL foldComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)p_trackShow;
- (void)p_trackClick;
- (void)componentOnClick;
- (double)imageLeftPadding;
- (void)setupSingleColumnUI;
- (void)setupDoubleColumnUI;
- (id)getCardComponentAccessibilityString;
- (id)createSimpleTableView;
- (void)clickComponentContainer;
- (id)initWithComponentModel:(id)a0 goodsBaseModel:(id)a1 liveContext:(id)a2 foldComponent:(BOOL)a3;
- (id)initWithComponentModel:(id)a0 goodsModel:(id)a1 liveContext:(id)a2 foldComponent:(BOOL)a3;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupUI;
- (void)setupAccessibility;
- (void)setupData;
- (struct CGSize { double x0; double x1; })componentSize;

@end
