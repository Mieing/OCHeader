@class NSArray;

@interface YYTextLine : NSObject {
    double _firstGlyphPos;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long row;
@property (retain, nonatomic) NSArray *verticalRotateRange;
@property (readonly, nonatomic) const struct __CTLine { } *CTLine;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) BOOL vertical;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double top;
@property (readonly, nonatomic) double bottom;
@property (readonly, nonatomic) double left;
@property (readonly, nonatomic) double right;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) double ascent;
@property (readonly, nonatomic) double descent;
@property (readonly, nonatomic) double leading;
@property (readonly, nonatomic) double lineWidth;
@property (readonly, nonatomic) double trailingWhitespaceWidth;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *attachmentRanges;
@property (readonly, nonatomic) NSArray *attachmentRects;

+ (id)lineWithCTLine:(struct __CTLine { } *)a0 position:(struct CGPoint { double x0; double x1; })a1 vertical:(BOOL)a2;

- (void)setCTLine:(const struct __CTLine { } *)a0;
- (void)reloadBounds;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
