@class NSArray, DitoMultiTabDataUtil, NSDictionary, DitoMultiTabViewPagerComponentView;

@interface DitoMultiTabViewPagerComponentViewModel : DitoComponentViewModel

@property (copy, nonatomic) NSArray *viewPagerDataArray;
@property (weak, nonatomic) DitoMultiTabViewPagerComponentView *cell;
@property (weak, nonatomic) DitoMultiTabDataUtil *tabDataUtil;
@property (nonatomic) BOOL isMainVCAppearing;
@property (copy, nonatomic) NSDictionary *config;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageWillEndShow;
- (void)pageDidShow;
- (void)pageDidEndShow;
- (void)pageWillShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
