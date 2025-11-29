@class NSArray, TRTCUser;

@interface TRTCPublishTarget : NSObject

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSArray *cdnUrlList;
@property (copy, nonatomic) TRTCUser *mixStreamIdentity;

- (struct PublishTarget { int x0; struct vector<trtc::PublishCdnUrl, std::allocator<trtc::PublishCdnUrl>> { struct PublishCdnUrl *x0; struct PublishCdnUrl *x1; struct __compressed_pair<trtc::PublishCdnUrl *, std::allocator<trtc::PublishCdnUrl>> { struct PublishCdnUrl *x0; } x2; } x1; struct TrtcUser { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; unsigned int x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; } x2; })convertToCppParams;
- (int)convertPublishMode:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
