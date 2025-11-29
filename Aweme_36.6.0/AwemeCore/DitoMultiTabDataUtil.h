@class DitoPageContext, NSArray, NSPointerArray, NSMutableDictionary, DitoMultiTabDataModel, DitoBodyContainer, NSString;
@protocol DitoMultiTabDatasourceProtocol, DitoExtensionContainerProtocol, DitoMultiTabContainerProtocol;

@interface DitoMultiTabDataUtil : NSObject <UIGestureRecognizerDelegate, DitoExtensionProtocol, DitoMultiTabDelegateProtocol>

@property (copy, nonatomic) NSArray *validTabModel;
@property (copy, nonatomic) NSArray *tabModelInData;
@property (retain, nonatomic) NSPointerArray *delegateArray;
@property (retain, nonatomic) NSMutableDictionary *tabViewMap;
@property (nonatomic) double lastBodyContentOffsetY;
@property (weak, nonatomic) DitoBodyContainer *bodyContainer;
@property (nonatomic) unsigned long long scrollState;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (weak, nonatomic) id<DitoMultiTabDatasourceProtocol> dataSource;
@property (weak, nonatomic) id<DitoMultiTabContainerProtocol> multiTabContainer;
@property (retain, nonatomic) DitoMultiTabDataModel *lastTabDataModel;
@property (retain, nonatomic) DitoMultiTabDataModel *currentTabDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)scrollViewDidReachBottom:(id)a0;
- (void)pageDidScroll:(id)a0;
- (void)interruptGesture:(id)a0;
- (void)pageWillBeginDragging:(id)a0;
- (void)initializeExtension;
- (void)addMultiTabDelegate:(id)a0;
- (void)DitoMultiTabContainer:(id)a0 willMoveToTabModel:(id)a1 fromTabModel:(id)a2;
- (void)DitoMultiTabContainerDidScroll:(id)a0;
- (void)DitoMultiTabContainer:(id)a0 didMoveToTabModel:(id)a1;
- (void)DitoMultiTabContainer:(id)a0 didMoveToTabModel:(id)a1 fromTabModel:(id)a2;
- (id)tabViewControllerWithTabData:(id)a0;
- (id)fetchValidTabPageModel;
- (id)keyForTabData:(id)a0;
- (id)fetchSubTabScrollViewWithVC:(id)a0;
- (id)fetchCurrentSubTabScrollView;
- (double)scrollViewMaxContentOffset:(id)a0;
- (id)tabViewControllerWithIndex:(long long)a0;
- (id)tabDataForKey:(id)a0;
- (void)configWithPageDatas:(id)a0;
- (void)configWithStripDatas:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)clear;
- (id)init;

@end
