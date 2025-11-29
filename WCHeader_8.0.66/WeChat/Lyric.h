@class NSString, NSMutableArray;

@interface Lyric : NSObject <NSCopying>

@property (retain, nonatomic) NSString *saveTime;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long lyricCount;
@property (nonatomic) long long lyricType;
@property (retain) NSMutableArray *sentencesArray;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *album;
@property (retain, nonatomic) NSString *by;
@property (nonatomic) long long offset;
@property (nonatomic) long long hasSegment;

- (id)init;
- (long long)lyricFinishTime;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
