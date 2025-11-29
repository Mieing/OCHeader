@class UIScrollView, NSString, IESECWinTabListModel, NSArray, IESECWinContext, NSMutableDictionary, UICollectionView, IESECServiceProxy, IESECLynxCard;
@protocol IESECWinLynxCardService, IESECWinMainScrollService, IESECWinFeedLinkedService;

@interface IESECWinLynxTabViewController : UIViewController <UIScrollViewDelegate, IESECLynxCardDelegate, LynxUIListDelegate, IESECWinTabViewControllerProtocol>

@property (retain, nonatomic) IESECLynxCard *lynxView;
@property (retain, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECWinTabListModel *listModel;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> *linkedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) NSMutableDictionary *scrollViews;
@property (retain, nonatomic) NSMutableDictionary *scrollViewContentOffsets;
@property (retain, nonatomic) NSArray *scrollViewNames;
@property (copy, nonatomic) NSString *scrollViewName;
@property (retain, nonatomic) UIScrollView *defaultScrollView;
@property (nonatomic) BOOL isManualScroll;
@property (nonatomic) BOOL enableFixNestScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long tabDataStatus;
@property (retain, nonatomic) UIScrollView *scrollView;

- (void)viewDidPageUpdate:(id)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (double)fitWidth;
- (void)reloadViewController;
- (void)activateLynxCard;
- (void)updateWithTabList:(id)a0;
- (void)resetScrollView;
- (void)checkIfScrollEnded;
- (void)p_scrollViewEndScroll;
- (void)listWillBeginDragging:(id)a0;
- (id)initWithContext:(id)a0 tabList:(id)a1;
- (void)tabVCWillShow;
- (void)tabVCDidShow;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)setUpUI;

@end
