@class MMTimer, MMMusicLyricResolver, NSMutableArray;
@protocol MMMusicLyricVcCalculatorDelegate;

@interface MMMusicLyricVcCalculator : NSObject {
    MMMusicLyricResolver *_lyricResolver;
    NSMutableArray *_lyricsList;
    NSMutableArray *_timeList;
    MMTimer *_timer;
    int _currentLyricIndex;
    double _offset;
}

@property (weak, nonatomic) id<MMMusicLyricVcCalculatorDelegate> delegate;

- (id)initWithLyricStr:(id)a0;
- (void)startScroll;
- (void)stopScroll;
- (void)scroll;
- (void)updateCurIndex;
- (void)stopTimer;
- (BOOL)isValidLyric;
- (id)arrLyrics;
- (id)arrTimes;
- (void).cxx_destruct;

@end
