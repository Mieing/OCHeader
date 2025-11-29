@class NSString, DitoGeneralContainerDefaultLoadMoreComponentView;

@interface DitoGeneralContainerDefaultLoadMoreComponentViewModel : DitoComponentViewModel

@property (copy, nonatomic) NSString *targetNodeTag;
@property (copy, nonatomic) NSString *targetGroupTag;
@property (nonatomic) long long remainCount;
@property (nonatomic) BOOL isNew;
@property (nonatomic) double targetGroupHeight;
@property (weak, nonatomic) DitoGeneralContainerDefaultLoadMoreComponentView *cell;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) unsigned long long loadingStyle;
@property (nonatomic) BOOL forceLight;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double verticalOffset;

- (void)loadMore;
- (void)resetPreload;
- (void)updateNode:(id)a0;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didLoadPageModel:(id)a0;
- (id)generalContext;
- (void)componentViewWillShow;
- (double)targetGroupContentHeight;
- (void)dispatchLoadMoreActionIfNeeded;
- (BOOL)targetGroupHeightHasChanged;
- (void)updatePreload;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
