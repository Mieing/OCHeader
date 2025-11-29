@class NSArray, NSParagraphStyle;

@interface BDRTextLine : NSObject {
    double _firstGlyphPos;
    double _lineWidth;
}

@property (retain, nonatomic) NSArray *glyphRuns;
@property (nonatomic) struct __CTLine { } *CTLine;
@property (nonatomic) unsigned long long lineIndex;
@property (readonly, nonatomic) double trailingWhitespaceWidth;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) double ascent;
@property (readonly, nonatomic) double descent;
@property (readonly, nonatomic) double leading;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double top;
@property (readonly, nonatomic) double bottom;
@property (readonly, nonatomic) double left;
@property (readonly, nonatomic) double right;
@property (nonatomic) struct CGPoint { double x; double y; } baselineOrigin;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double lineHeight;
@property (readonly, nonatomic) NSArray *textBlocks;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSParagraphStyle *paragraphStyle;

- (id)initWithCTLine:(struct __CTLine { } *)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
