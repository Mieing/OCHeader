@class NSDictionary, NSObject, BDRTextLine;
@protocol BDRGlyphRunDrawProtocol;

@interface BDRGlyphRun : NSObject {
    struct __CTRun { } *_run;
    double _offset;
    BDRTextLine *_line;
    NSObject<BDRGlyphRunDrawProtocol> *_attachment;
}

@property (readonly, nonatomic) NSDictionary *attributes;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) unsigned long long numberOfGlyphs;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) double ascent;
@property (readonly, nonatomic) double descent;
@property (readonly, nonatomic) double leading;
@property (readonly, nonatomic) double width;

- (void)drawAttachment:(struct CGContext { } *)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)drawInContext:(struct CGContext { } *)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithRun:(struct __CTRun { } *)a0 layoutLine:(id)a1 offset:(double)a2;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
