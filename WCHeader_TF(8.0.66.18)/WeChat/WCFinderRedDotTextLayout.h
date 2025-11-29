@class NSString;

@interface WCFinderRedDotTextLayout : NSObject <RichTextLayoutDelegate>

@property (nonatomic) unsigned long long lineNumber;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) double contentSingleLineWidth;
@property (nonatomic) double remainWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContent:(id)a0 font:(id)a1 lineNumber:(unsigned long long)a2;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
