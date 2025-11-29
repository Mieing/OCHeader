@class NSString, NSDictionary, NSMutableArray, GXTextManager;

@interface GXRichTextNode : GXTextNode {
    BOOL _isAttribute;
    NSString *_highlightTag;
    NSString *_highlightColor;
    NSDictionary *_highlightFontInfo;
    GXTextManager *_richTextManager;
}

@property (retain, nonatomic) NSMutableArray *ranges;
@property (nonatomic) double recordFlexGrow;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } width; struct { int dimen_type; float dimen_value; } height; } recordSize;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } width; struct { int dimen_type; float dimen_value; } height; } recordMinSize;

+ (id)regexMap;

- (void)bindData:(id)a0;
- (void)updateNormalStyle:(id)a0 isMark:(BOOL)a1;
- (void)handleExtend:(id)a0 isCalculate:(BOOL)a1;
- (id)creatView;
- (void)calculateWithData:(id)a0;
- (void)recordStyle;
- (BOOL)processTextConfig:(id)a0;
- (void)processText:(id)a0;
- (void)processRichText;
- (id)regularExpressionWithValue:(id)a0;
- (void)updateNodeWithAttributeString:(id)a0;
- (void).cxx_destruct;
- (void)renderView:(id)a0;

@end
