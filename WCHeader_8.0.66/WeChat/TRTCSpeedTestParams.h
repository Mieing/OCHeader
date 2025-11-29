@class NSString;

@interface TRTCSpeedTestParams : NSObject

@property (nonatomic) unsigned int sdkAppId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userSig;
@property (nonatomic) long long expectedUpBandwidth;
@property (nonatomic) long long expectedDownBandwidth;
@property (nonatomic) unsigned long long scene;

- (struct SpeedTestParams { unsigned int x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; int x3; int x4; BOOL x5; int x6; int x7; struct IPEndPoint { struct IPAddress { struct IPAddressBytes { struct array<unsigned char, 16UL> { unsigned char x0[16]; } x0; unsigned char x1; } x0; } x0; unsigned short x1; } x8; unsigned char x9; int x10; })convertToCppParams;
- (int)convertSpeedTestScene:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
