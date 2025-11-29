@class NSArray, LLDitoMultiTabStripComponentView, LLDitoMultiTabDataUtil;

@interface LLDitoMultiTabStripComponentViewModel : LLDitoComponentViewModel

@property (copy, nonatomic) NSArray *stripTabDataArray;
@property (weak, nonatomic) LLDitoMultiTabStripComponentView *cell;
@property (weak, nonatomic) LLDitoMultiTabDataUtil *tabDataUtil;
@property (nonatomic) unsigned long long lineStyle;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
