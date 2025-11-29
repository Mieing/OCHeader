@interface QPointEventEngine : NSObject

- (void)asyncFetchPointEventData:(id)a0 completion:(id /* block */)a1;
- (id)constructResponseData:(struct Response { short x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; struct vector<qmapkit::Mapsdk_trafficevent::Detail, std::allocator<qmapkit::Mapsdk_trafficevent::Detail>> { struct Detail *x0; struct Detail *x1; struct __compressed_pair<qmapkit::Mapsdk_trafficevent::Detail *, std::allocator<qmapkit::Mapsdk_trafficevent::Detail>> { struct Detail *x0; } x2; } x2; })a0;
- (id)getStringFromChar:(const char *)a0;
- (id)constructURL:(id)a0 withURL:(id)a1;

@end
