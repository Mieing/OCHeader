@class NSIndexSet, NSString;

@interface AWEIMFTSResultHighlightInfo : NSObject

@property (copy, nonatomic) NSIndexSet *highlightRangeList;
@property (copy, nonatomic) NSString *textWithoutSpace;
@property (copy, nonatomic) NSIndexSet *spaceIndex;
@property (copy, nonatomic) NSString *text;

+ (id)getKeyElementArr:(id)a0;
+ (id)getNoSpaceKeywords:(id)a0;
+ (id)findLocationOfString:(id)a0 inContent:(id)a1;

- (void)setHighlightRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)addHighlightRangeWithKeyElement:(id)a0;
- (void)enumerateHighlightRangesUsingBlock:(id /* block */)a0;
- (id)getSubInfoFormIndex:(unsigned long long)a0;
- (void)appendHighlightInfo:(id)a0;
- (void)appendPlainText:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })highlightRange;

@end
