@class NSString, NSMutableDictionary;

@interface LVVETextPackager : NSObject

@property (retain, nonatomic) NSMutableDictionary *fontFileCahcer;
@property (copy, nonatomic) NSString *textPlaceHolder;
@property (copy, nonatomic) NSString *taileaderPlaceHolder;

+ (id)fontPathAtFolder:(id)a0;
+ (struct CGPoint { double x0; double x1; })transformDistance:(double)a0 withAngle:(double)a1;
+ (void)setTextPlaceHolder:(id)a0;
+ (void)setTaileaderPlaceHolder:(id)a0;
+ (id)genTextParametersSegment:(struct shared_ptr<CutSame::Segment> { struct Segment *x0; struct __shared_weak_count *x1; })a0 rootPath:(id)a1 bundleResource:(id)a2;
+ (id)systemFontAtCurrentLanguage:(id)a0;
+ (id)fallbackFontList:(id)a0;
+ (BOOL)isTransparentColor:(id)a0;
+ (id)mixKtvShadowColor:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a0 textColor:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a1;
+ (id)lanaguageCode;
+ (id)orderFontList;
+ (id)genTextParametersSegment:(struct shared_ptr<CutSame::Segment> { struct Segment *x0; struct __shared_weak_count *x1; })a0 rootPath:(id)a1;
+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
