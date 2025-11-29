@interface TPSubtitleParserWrapper : NSObject {
    struct ITPSubtitleParser { void /* function */ **x0; } *_subtitleParser;
    struct TPSubtitleParserCallbackWrapper { void /* function */ **x0; void /* function */ **x1; id x2; id x3; } *_subtitleCb;
}

- (id)initWithUrl:(id)a0 httpHeader:(id)a1 callback:(id)a2 outputType:(int)a3;
- (void)dealloc;
- (void)loadAsync;
- (void)startAsync;
- (void)pauseAsync;
- (struct vector<TPMediaTrackInfo, std::allocator<TPMediaTrackInfo>> { struct TPMediaTrackInfo *x0; struct TPMediaTrackInfo *x1; struct __compressed_pair<TPMediaTrackInfo *, std::allocator<TPMediaTrackInfo>> { struct TPMediaTrackInfo *x0; } x2; })getTrackInfo;
- (int)selectTrackAsync:(int)a0 opaque:(long long)a1;
- (int)selectTracksAsync:(struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; })a0 opaque:(long long)a1;
- (struct map<int, std::string, std::less<int>, std::allocator<std::pair<const int, std::string>>> { struct __tree<std::__value_type<int, std::string>, std::__map_value_compare<int, std::__value_type<int, std::string>, std::less<int>>, std::allocator<std::__value_type<int, std::string>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::string>, std::less<int>>> { unsigned long long x0; } x2; } x0; })getSubtitleText:(long long)a0;
- (void)setRenderParams:(struct { int x0; int x1; unsigned long long x2; unsigned long long x3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x4; float x5; float x6; unsigned int x7; unsigned int x8; float x9; unsigned int x10; float x11; float x12; float x13; float x14; })a0;
- (void)stop;

@end
