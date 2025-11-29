@class NSArray, NSString;
@protocol AWESearchDynamicPreLayoutManagerProtocol;

@interface AWEEcommerceSearchLynxPreLayoutManager : NSObject <AWESearchDynamicPreLayoutProtocol>

@property (retain, nonatomic) id<AWESearchDynamicPreLayoutManagerProtocol> preLayoutManager;
@property (copy, nonatomic) NSArray *blackList;
@property (copy, nonatomic) NSArray *blackCardNameList;
@property (nonatomic) long long cacheMaxCount;
@property (nonatomic) BOOL disableWithPreLoadOnFirst;
@property (nonatomic) BOOL disableWithRealHeightOnLoadmore;
@property (nonatomic) BOOL disablePreLayoutOnFirstPage;
@property (nonatomic) BOOL disablePreLayoutOnPlaceholder;
@property (nonatomic) BOOL disablePreLayoutOnScroll;
@property (nonatomic) BOOL disableUpdateHeightOnCallback;
@property (nonatomic) BOOL isSeparateRenderBlocked;
@property (copy, nonatomic) NSArray *preloadSchemaList;
@property (readonly, nonatomic) BOOL isSeparateRenderOpen;
@property (nonatomic) BOOL enableScrollPreLayout;
@property (nonatomic) BOOL enablePreLayoutAfterFirstScreen;
@property (copy, nonatomic) id /* block */ currentColumnTypeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMultiTASM;
+ (void)preprocessModel:(id)a0;
+ (BOOL)enableAsyncResourceTemplateLoad;

- (id)initWithTab:(id)a0 enterFrom:(id)a1;
- (void)createLynxPreLayoutTaskWithArray:(id)a0 triggerFrom:(long long)a1 completionBlock:(id /* block */)a2;
- (void)clearLynxRenderContext:(id)a0;
- (void)createLynxLayoutTaskFromIndex:(long long)a0 dataList:(id)a1 triggerFrom:(long long)a2;
- (void).cxx_destruct;

@end
