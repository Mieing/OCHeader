@class NSString;

@interface LVVEBundleDataSourceProvider : NSObject

@property (retain, nonatomic) Class performer;
@property (copy, nonatomic) NSString *rootPath;

+ (BOOL)checkExitInLocalDataSource:(int)a0;

- (id)initWithRootPath:(id)a0;
- (id)taileaderReourcePath;
- (id)voiceEffectPath;
- (id)videoAjustPathForType:(int)a0 payloadPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a1 resourceVersion:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a2;
- (id)taileaderAnimationPath;
- (id)systemFontFolder;
- (id)chromaPathWithPayloadPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a0;
- (void).cxx_destruct;

@end
