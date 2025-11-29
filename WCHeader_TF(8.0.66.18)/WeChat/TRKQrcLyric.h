@class Lyric, NSString, NSArray;

@interface TRKQrcLyric : NSObject

@property (retain, nonatomic) Lyric *lyric;
@property (copy, nonatomic) NSString *saveTime;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) long long lyricCount;
@property (nonatomic) long long lyricType;
@property (retain, nonatomic) NSArray *sentences;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *by;
@property (nonatomic) long long offset;
@property (nonatomic) long long hasSegment;
@property (nonatomic) long long lyricFinishTime;
@property (nonatomic) BOOL isValid;

- (id)initWithLyric:(id)a0;
- (id)timeInfoArrayForScore;
- (void).cxx_destruct;

@end
