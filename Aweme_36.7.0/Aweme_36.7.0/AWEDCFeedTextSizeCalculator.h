@interface AWEDCFeedTextSizeCalculator : NSObject

+ (struct CGSize { double x0; double x1; })sizeThatFitsAttributedString:(id)a0 constraintsSize:(struct CGSize { double x0; double x1; })a1 limitedToNumberOfLines:(unsigned long long)a2 enableCacheCalRes:(BOOL)a3;
+ (struct CGSize { double x0; double x1; })sizeThatFitsAttributedString:(id)a0 constraintsSize:(struct CGSize { double x0; double x1; })a1 limitedToNumberOfLines:(unsigned long long)a2;
+ (long long)logicNumberOfLinesFitsAttributedString:(id)a0 constraintsSize:(struct CGSize { double x0; double x1; })a1 limitedToNumberOfLines:(unsigned long long)a2;

@end
