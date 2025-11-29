@interface StylePatternGenerator : BasePatternGenerator

@property (nonatomic) struct _NSParserPosition { BOOL newLine; BOOL endOfString; double x; double y; double width; double height; } startParserPosition;

- (id)init;
- (id)patternForContent:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 parser:(id)a2;

@end
