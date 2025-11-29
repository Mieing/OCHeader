@class NSString, NSArray;

@interface TRTCTranscodingConfig : NSObject

@property (nonatomic) long long mode;
@property (nonatomic) int appId;
@property (nonatomic) int bizId;
@property (nonatomic) int videoWidth;
@property (nonatomic) int videoHeight;
@property (nonatomic) int videoBitrate;
@property (nonatomic) int videoFramerate;
@property (nonatomic) int videoGOP;
@property (nonatomic) int backgroundColor;
@property (copy, nonatomic) NSString *backgroundImage;
@property (nonatomic) int audioSampleRate;
@property (nonatomic) int audioBitrate;
@property (nonatomic) int audioChannels;
@property (nonatomic) int audioCodec;
@property (copy, nonatomic) NSArray *mixUsers;
@property (copy, nonatomic) NSString *streamId;
@property (copy, nonatomic) NSString *videoSeiParams;

- (struct MixedTranscodingConfig { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x14; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x15; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x16; struct vector<trtc::MixedUserConfig, std::allocator<trtc::MixedUserConfig>> { struct MixedUserConfig *x0; struct MixedUserConfig *x1; struct __compressed_pair<trtc::MixedUserConfig *, std::allocator<trtc::MixedUserConfig>> { struct MixedUserConfig *x0; } x2; } x17; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x18; struct Optional<trtc::VideoSeiParams> { struct OptionalStorage<trtc::VideoSeiParams, false, false> { BOOL x0; union { char x0; struct VideoSeiParams { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; int x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; struct Optional<unsigned int> { struct OptionalStorage<unsigned int, true, true> { BOOL x0; union { char x0; unsigned int x1; } x1; } x0; } x3; struct Optional<bool> { struct OptionalStorage<bool, true, true> { BOOL x0; union { char x0; BOOL x1; } x1; } x0; } x4; } x1; } x1; } x0; } x19; })convertToCppParams;
- (int)convertMixedMode:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
