@class NSData;

@interface WAEJFontLayout : NSObject {
    NSData *glyphLayout;
}

@property (readonly, nonatomic) struct { unsigned short x0; unsigned short x1; float x2; struct *x3; unsigned long long x4; } *glyphLayout;
@property (readonly, nonatomic) long long glyphCount;
@property (readonly, nonatomic) struct { float width; float ascent; float descent; } metrics;

- (id)initWithGlyphLayout:(id)a0 glyphCount:(long long)a1 metrics:(struct { float x0; float x1; float x2; })a2;
- (void)dealloc;

@end
