@class NSString;

@interface AWEGrouponLifeFeedsTitleComponentVM : AWEGrouponLifeFeedsBaseComponentVM

@property (nonatomic) double dismissTime;
@property (nonatomic) double componentHeight;
@property (copy, nonatomic) NSString *showText;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0 presetHeight:(double)a1;
- (void)updateNode:(id)a0;
- (void)componentDidCompleteShow:(unsigned long long)a0;
- (void)hideTitleComponent;
- (void)cancelHideTitleComponentTask;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)dealloc;

@end
