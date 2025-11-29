@interface GCLabelDynamicLayout : NSObject

@property (nonatomic) double labelFontSize;
@property (nonatomic) double labelHeight;
@property (nonatomic) double oriLabelheight;
@property (nonatomic) double isBold;
@property (nonatomic) double horizonalMargin;

- (id)initWithBasicFontSize:(double)a0 lineHeight:(double)a1;
- (void)configLabel:(id)a0;
- (void)configLabel:(id)a0 isBold:(BOOL)a1;
- (void)configBtn:(id)a0;
- (double)diffWithOriLineHeight;
- (id)labelFont;
- (id)fontWithIsBold:(BOOL)a0;

@end
