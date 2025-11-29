@class MMTimer, NSMutableDictionary, NSString;

@interface MMMusicLyricService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *infoDic;
@property (retain, nonatomic) MMTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)initLyricFor:(id)a0 lyrics:(id)a1;
- (id)getLyricResolverWithSongId:(id)a0;
- (void)requestLyricNotifying:(id)a0;
- (void)resignLyricNotifying:(id)a0;
- (id)currentLyricStr:(id)a0;
- (void)setManualOffsetControl:(id)a0 enabled:(BOOL)a1;
- (void)updateLyricIndexManually:(id)a0 musicOffset:(double)a1;
- (void)setupTimerIfNeeded;
- (void)stopTimer;
- (void)updateLyric;
- (void)updateLyricWithInfo:(id)a0 musicOffset:(double)a1;
- (void)notifyLyricChanged:(id)a0;
- (void).cxx_destruct;

@end
