@class AWESearchCachalotVerticalBottomBarConfigModel, AWESearchResultVerticalBaseViewController;
@protocol AWESearchResultVerticalContainerInsertCardProtocol;

@interface AWESearchResultVerticalBottomBarHolder : UIView

@property (weak, nonatomic) AWESearchResultVerticalBaseViewController *container;
@property (retain, nonatomic) AWESearchCachalotVerticalBottomBarConfigModel *configModel;
@property (weak, nonatomic) id<AWESearchResultVerticalContainerInsertCardProtocol> insertDelegate;

+ (id)createConcreteEntryView:(long long)a0 container:(id)a1;

- (id)getBottomBarView;
- (void)showCommentInputPanelWithLogExtra:(id)a0;
- (void)dismissCommentInputPanel;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
