@class NSString, IESLiveRightBottomMutuallyExclusiveItem, UIView;

@interface IESLiveGameCPExplainCardContainerImpl : UIView <HTSLivePluginLayoutView, IESGCPLiveExplainCardContainerService>

@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (weak, nonatomic) UIView *cardView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *gameExplainItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)removeExplainCardFromContainer;
- (void)notifyExplainCardDidShowed;
- (BOOL)enableShowExplainCard;
- (void)showExplainCard:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)viewType;

@end
