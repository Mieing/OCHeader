@class NSArray, DitoMultiTabStripComponentView, DitoMultiTabDataUtil;

@interface DitoMultiTabStripComponentViewModel : DitoComponentViewModel

@property (copy, nonatomic) NSArray *stripTabDataArray;
@property (weak, nonatomic) DitoMultiTabStripComponentView *cell;
@property (weak, nonatomic) DitoMultiTabDataUtil *tabDataUtil;
@property (nonatomic) unsigned long long lineStyle;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
