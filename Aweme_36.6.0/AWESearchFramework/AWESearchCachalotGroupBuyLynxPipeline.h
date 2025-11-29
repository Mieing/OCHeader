@class NSMutableDictionary, NSMapTable;

@interface AWESearchCachalotGroupBuyLynxPipeline : AWESearchCachalotLynxPipeline

@property (retain, nonatomic) NSMutableDictionary *dictMCachedBundleChannelStyleLynxCardReuseIdentifierInfo;
@property (retain, nonatomic) NSMapTable *engineMap;

+ (BOOL)searchGroupBuyCardSeparatorEnabled;

- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (id)reuseIdentifierWithViewModel:(id)a0;
- (BOOL)useTemplateBundle;
- (id)fetchControllerContextWithLynxEngine:(id)a0;
- (id)fetchViewModelWithLynxEngine:(id)a0;
- (void)lynxEngineSearchLynxElementDidMount:(id)a0;
- (id)getLynxSeparateRenderBlockList;
- (Class)getSeparateRenderConfigClass;
- (BOOL)enableRankFixForSeperateRenderMeasure;
- (id)templateBundleLoadListBeforeRequest;
- (id)getLynxReuseBlockList;
- (BOOL)supportAsyncComponentViewSizeMeasure;
- (BOOL)blockLynxSeparateRenderForAsyncComponentViewSize;
- (BOOL)enableUpdateGlobalPropsForLynxReuse;
- (id)customUpdateHeightComponentWithDynamicEngine:(id)a0;
- (double)separatorAreaHeightWithDividerConfig:(id)a0;
- (double)containerHeightWithViewModel:(id)a0 cardHeight:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
