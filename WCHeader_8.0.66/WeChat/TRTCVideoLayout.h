@class NSString, TRTCUser;

@interface TRTCVideoLayout : NSObject <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) int zOrder;
@property (nonatomic) long long fillMode;
@property (nonatomic) int backgroundColor;
@property (copy, nonatomic) NSString *placeHolderImage;
@property (copy, nonatomic) TRTCUser *fixedVideoUser;
@property (nonatomic) long long fixedVideoStreamType;

- (struct VideoLayout { struct MixCoordinate { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x0; unsigned int x1; unsigned int x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; struct TrtcUser { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; unsigned int x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; } x4; int x5; })convertToCppParams;
- (unsigned int)convertRenderMode:(long long)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
