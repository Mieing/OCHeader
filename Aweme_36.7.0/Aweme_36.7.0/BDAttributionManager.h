@interface BDAttributionManager : NSObject

+ (id)sharedInstance;

- (void)_updateLostInfo:(id)a0 forInstance:(id)a1 withType:(int)a2 typeString:(id)a3 timestamp:(id)a4;
- (id)_metaByExtractingLog:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a0;
- (BOOL)_updateFileInfo:(id)a0 latestALogTime:(id)a1 withMeta:(id)a2;
- (BOOL)_updateFlushInfoWithLostInfo:(id)a0 lastFlushStatus:(id)a1 withMeta:(id)a2 latestALogTime:(id)a3;
- (BOOL)_updateConfig:(id)a0 withMeta:(id)a1;
- (void)recordAttributionMeta:(id)a0;
- (id)attributionInfoFrom:(double)a0 to:(double)a1;
- (void)recordAttributionResult:(id)a0;

@end
