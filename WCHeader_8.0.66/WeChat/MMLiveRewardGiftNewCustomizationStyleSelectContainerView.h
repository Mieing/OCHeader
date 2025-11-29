@class NSMutableArray, MMFinderLiveGiftNewCustomizationModel, MMLiveRewardGiftNewCustomizationEditLogic;

@interface MMLiveRewardGiftNewCustomizationStyleSelectContainerView : UIScrollView

@property (retain, nonatomic) MMLiveRewardGiftNewCustomizationEditLogic *customizationEditLogic;
@property (readonly, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel;
@property (retain, nonatomic) NSMutableArray *styleContentViewList;

- (id)initWithCustomizationEditLogic:(id)a0;
- (void)configCustomizationEditLogic:(id)a0;
- (void)commonInit;
- (void)layoutSubviews;
- (void)addSelectContentViews;
- (void)addComponentSelectContentView:(id)a0;
- (void)addNameSelectContentView:(id)a0;
- (void)updateStyleSelectContentViewOrigin:(id)a0;
- (void)updateContainerContentSize;
- (void)layoutAllContentViews;
- (void)removeAllSelectContentViews;
- (id)getComponentSelectContentViewWithKey:(id)a0;
- (void)loadData;
- (void)changeSelectToStyleContent:(id)a0;
- (void).cxx_destruct;

@end
