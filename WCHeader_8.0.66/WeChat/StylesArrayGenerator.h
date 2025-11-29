@class NSString, NSMutableArray;

@interface StylesArrayGenerator : BasePatternGenerator <BaseParserStyleDelegate> {
    NSMutableArray *_arrStyles;
}

@property (nonatomic) double nextLineY;
@property (nonatomic) struct _NSParserPosition { BOOL newLine; BOOL endOfString; double x; double y; double width; double height; } stPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getStyles;
- (void)clearData;
- (id)patternForContent:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 parser:(id)a2;
- (id)getParsedStyles;
- (void).cxx_destruct;

@end
