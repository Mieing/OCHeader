@interface YYTextRunGlyphRange : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } glyphRangeInRun;
@property (nonatomic) unsigned long long drawMode;

+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 drawMode:(unsigned long long)a1;

@end
