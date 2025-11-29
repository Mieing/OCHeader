@protocol AWESharePanelListCellModel, AWESharePanelListCell;

@interface AWESharePanelListConfigurator : NSObject

@property (retain, nonatomic) id<AWESharePanelListCellModel> cellModel;
@property (retain, nonatomic) id<AWESharePanelListCell> cell;

+ (id)configuratorWithCell:(id)a0 cellModel:(id)a1;

- (id)initWithCell:(id)a0 cellModel:(id)a1;
- (void)CONFIGURE_WITH_TYPE_AWEShareTitleCell;
- (void)CONFIGURE_WITH_TYPE_AWESharePanelListContainerCell;
- (void)CONFIGURE_WITH_TYPE_AWESharePanelListVerticalCell;
- (void)CONFIGURE_WITH_TYPE_AWESharePanelListIMContainerCell;
- (id)configure;
- (void).cxx_destruct;

@end
