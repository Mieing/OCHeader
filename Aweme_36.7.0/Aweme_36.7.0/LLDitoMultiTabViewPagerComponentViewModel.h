@class NSArray, NSDictionary, LLDitoMultiTabViewPagerComponentView, LLDitoMultiTabDataUtil;

@interface LLDitoMultiTabViewPagerComponentViewModel : LLDitoComponentViewModel

@property (copy, nonatomic) NSArray *viewPagerDataArray;
@property (weak, nonatomic) LLDitoMultiTabViewPagerComponentView *cell;
@property (weak, nonatomic) LLDitoMultiTabDataUtil *tabDataUtil;
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
