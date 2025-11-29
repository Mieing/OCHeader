@class NSString, NSMutableArray;

@interface MMMusicLyricResolver : NSObject {
    BOOL _isLyricListContainsEmptyStr;
}

@property (retain, nonatomic) NSString *lyrics;
@property (retain, nonatomic) NSMutableArray *lyricsList;
@property (retain, nonatomic) NSMutableArray *timeList;

- (id)init;
- (BOOL)resolveLyrics:(id)a0;
- (float)time_StringToFloat:(id)a0;
- (int)getCurrentIndexWithTime:(float)a0;
- (id)lyricsForTime:(double)a0;
- (id)lyricsForTime:(double)a0 preferCount:(unsigned long long)a1;
- (double)getDuaration;
- (void).cxx_destruct;

@end
