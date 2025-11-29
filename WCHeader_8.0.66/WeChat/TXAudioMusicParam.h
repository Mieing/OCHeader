@class NSString;

@interface TXAudioMusicParam : NSObject

@property (nonatomic) int ID;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long loopCount;
@property (nonatomic) BOOL publish;
@property (nonatomic) BOOL isShortFile;
@property (nonatomic) long long startTimeMS;
@property (nonatomic) long long endTimeMS;

- (id)init;
- (id)initWithBGMID:(int)a0 path:(id)a1;
- (id)initWithBGMID:(int)a0 path:(id)a1 loopCount:(long long)a2 publish:(BOOL)a3 enableCache:(BOOL)a4;
- (struct AudioBgmParams { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; int x1; int x2; int x3; long long x4; long long x5; BOOL x6; BOOL x7; BOOL x8; long long x9; })getInternalMusicParam:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;

@end
