@class NSString, NSMutableOrderedSet, AWESharePanelListIMCellModel, UIView, UIButton;

@interface AWEShareIMContacterAdapter : UIViewController <AWESharePanelAdapter>

@property (retain, nonatomic) UIView *gradientMask;
@property (retain, nonatomic) AWESharePanelListIMCellModel *imCellModel;
@property (retain, nonatomic) NSMutableOrderedSet *extensionSet;
@property (nonatomic) BOOL willTransferToShareList;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (readonly, nonatomic) BOOL isUsingAdapter;
@property (readonly, nonatomic) BOOL isBackPackAdapter;
@property (readonly, nonatomic) unsigned long long panelType;
@property (readonly, nonatomic) unsigned long long styleOptions;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (weak, nonatomic) UIButton *shareButton;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fromGroupID;
- (id)itemWithType:(id)a0;
- (BOOL)reloadCellForItemWithType:(id)a0;
- (BOOL)scrollToCellForItemWithType:(id)a0;
- (BOOL)isCellVisibleForItemWithType:(id)a0;
- (void)addDismissedHandler:(id /* block */)a0;
- (void)removeExtension:(id)a0;
- (id)initWithCellModel:(id)a0;
- (id)getTranspondShareModelList;
- (void)didSelectContacter:(id)a0;
- (void)unselectContacter;
- (void)willdismissPanel:(BOOL)a0;
- (id /* block */)willDismissHandlerForShareList;
- (void)moreCellDidTap;
- (id)p_getShareListPanel;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)addExtension:(id)a0;
- (id)containerView;
- (void)viewDidLoad;

@end
