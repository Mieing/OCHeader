@class LLDitoBodyContainer, NSArray, NSPointerArray, NSMutableDictionary, LLDitoPageContext, NSString, LLDitoMultiTabDataModel;
@protocol LLDitoMultiTabDatasourceProtocol, LLDitoMultiTabContainerProtocol, LLDitoExtensionContainerProtocol;

@interface LLDitoMultiTabDataUtil : NSObject <UIGestureRecognizerDelegate, LLDitoExtensionProtocol, LLDitoMultiTabDelegateProtocol>

@property (copy, nonatomic) NSArray *validTabModel;
@property (copy, nonatomic) NSArray *tabModelInData;
@property (retain, nonatomic) NSPointerArray *delegateArray;
@property (retain, nonatomic) NSMutableDictionary *tabViewMap;
@property (nonatomic) double lastBodyContentOffsetY;
@property (weak, nonatomic) LLDitoBodyContainer *bodyContainer;
@property (nonatomic) unsigned long long scrollState;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (weak, nonatomic) id<LLDitoMultiTabDatasourceProtocol> dataSource;
@property (weak, nonatomic) id<LLDitoMultiTabContainerProtocol> multiTabContainer;
@property (retain, nonatomic) LLDitoMultiTabDataModel *lastTabDataModel;
@property (retain, nonatomic) LLDitoMultiTabDataModel *currentTabDataModel;
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
