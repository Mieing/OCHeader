@class YYLabel;

@interface AWELoadMoreCustomFooter : AWELoadMoreBaseFooter

@property (retain, nonatomic) YYLabel *label;

- (void)updateLabelWithAttributedText:(id)a0;
- (id)getInnerLabel;
- (void)updateLabelWithText:(id)a0;
- (void)updateLabelWithTextColor:(id)a0;
- (void).cxx_destruct;

@end
