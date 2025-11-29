@class ACCModernAutoCaptionItemCell;

@interface ACCModernAutoCaptionTableView : UITableView

@property (weak, nonatomic) ACCModernAutoCaptionItemCell *highlightCell;

- (void)updateTextHighlightWithIndex:(unsigned long long)a0;
- (long long)highlightIndexWithContentOffset:(double)a0 defaultIndex:(long long)a1;
- (void).cxx_destruct;
- (void)scrollToIndex:(unsigned long long)a0 animated:(BOOL)a1;

@end
