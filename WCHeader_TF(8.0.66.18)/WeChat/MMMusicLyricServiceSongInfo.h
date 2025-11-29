@class NSString, MMMusicLyricResolver;

@interface MMMusicLyricServiceSongInfo : NSObject

@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) MMMusicLyricResolver *resolver;
@property (nonatomic) int currentLyricIndex;
@property (nonatomic) long long observerCount;
@property (nonatomic) BOOL manualOffsetControlEnabled;

- (id)initWithSongId:(id)a0;
- (void)setupLyrics:(id)a0;
- (void).cxx_destruct;

@end
