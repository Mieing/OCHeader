@class DitoActionContext, NSMutableDictionary, DitoPageContext, NSString, NSNumber, DitoSwitchNodeActionOperation;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailTabSwitchExtension : NSObject <DitoExtensionProtocol>

@property (retain, nonatomic) NSMutableDictionary *listOffSetCache;
@property (retain, nonatomic) DitoSwitchNodeActionOperation *switchTagOperation;
@property (retain, nonatomic) NSNumber *targetOffsetY;
@property (retain, nonatomic) DitoActionContext *selectActionContext;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLoadingMore;
- (void)bindStateAndAction;
- (void)componentViewDidCompleteShow:(id)a0;
- (void)initializeExtension;
- (void)handleSwitchContext:(id)a0;
- (void)retryLoadTabData;
- (void)publishEventWithName:(id)a0 eventAttachedParams:(id)a1;
- (void)tabSelectList:(id)a0 event:(id)a1 isSticked:(BOOL)a2 stickOffsetY:(double)a3 nodeTag:(id)a4;
- (id)cacheKeyWithTabId:(id)a0;
- (void)cacheScrollState:(id)a0 isSticked:(BOOL)a1;
- (void)scrollListViewToOffset:(id)a0 isSticked:(BOOL)a1 stickOffsetY:(double)a2 nodeTag:(id)a3;
- (void).cxx_destruct;

@end
