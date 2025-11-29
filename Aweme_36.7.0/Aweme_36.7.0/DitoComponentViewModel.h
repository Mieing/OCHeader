@class DitoPageContext, NSArray, NSString, DitoStyle, NSNumber;

@interface DitoComponentViewModel : NSObject <DitoComponentViewModel>

@property (nonatomic) BOOL isSticked;
@property (retain, nonatomic) NSNumber *scrollBodyViewOffsetYWhenStickToTop;
@property (retain, nonatomic) NSArray *eventList;
@property (weak, nonatomic) DitoPageContext *context;
@property (copy, nonatomic) NSString *customTag;
@property (nonatomic) struct CGSize { double width; double height; } componentSize;
@property (nonatomic) double presetHeight;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) DitoStyle *style;
@property (nonatomic) BOOL enableEventThrough;
@property (nonatomic) BOOL isCompleteVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyViewModel;

- (void)p_parseNode:(id)a0;
- (id)componentReuseIdentifier;
- (void)updateNode:(id)a0;
- (void)bindStateAndAction;
- (void)postEvent:(id)a0 withCompletion:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)componentViewDidCompleteShow;
- (id)superNode;
- (id)eventByName:(id)a0;
- (void)componentViewWillShow;
- (id)stickView;
- (BOOL)hasCacheWithKey:(id)a0;
- (void)componentViewDidEndShow;
- (void)cacheSubTreeWithNodeTag:(id)a0 cacheKey:(id)a1 extraParams:(id)a2;
- (void)removeTags:(id)a0 animationDuration:(double)a1;
- (void)foldGroup:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2 animationDuration:(double)a3;
- (void)expandGroup:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2 animationDuration:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })componentFrameInContainer;
- (void)scrollToOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)componentViewWillEndShow;
- (void)refreshNode:(id)a0;
- (id)extraComponentTrackParams;
- (void)stayTimeRecordStart;
- (void)stayTimeRecordPause;
- (void)setComponentLongestStage:(long long)a0;
- (void)setComponentErrorStage:(long long)a0 message:(id)a1 errorType:(id)a2;
- (void)loadStyle:(id)a0;
- (id)siblingNodeList:(id)a0;
- (id)fetchCacheItemWithKey:(id)a0;
- (void)scrollToCenter;
- (id)siblingNodeList;
- (id)leftSiblingNode;
- (id)rightSiblingNode;
- (BOOL)stickToTop;
- (void)removeGroup:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2 animationDuration:(double)a3;
- (id)componentTagListInNodeContainHidden:(id)a0;
- (id)componentTagListInNode:(id)a0;
- (BOOL)whetherToRender:(id)a0;
- (void)scrollToTop;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)init;
- (void)removeNode:(id)a0;
- (void)scrollToBottom;
- (id)currentNode;

@end
