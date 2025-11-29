@class NSString;

@interface AWESearchAIGCNativePipeline : AWESearchCachalotCardPipeline

@property (copy, nonatomic) NSString *referString;

- (id)transformBusinessDataItem:(id)a0 ofDataType:(unsigned long long)a1;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (void)attachComponentView:(id)a0 usingViewModel:(id)a1;
- (void).cxx_destruct;

@end
