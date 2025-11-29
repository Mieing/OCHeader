@protocol CommonPlayerDelegate;

@interface CommonPlayer : NSObject

@property (weak, nonatomic) id<CommonPlayerDelegate> m_delegate;

- (void)updatePath:(id)a0;
- (void)updateData:(id)a0;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (void)setVolume:(float)a0;
- (BOOL)isPlaying;
- (double)duration;
- (void)setNumberOfLoops:(long long)a0;
- (void).cxx_destruct;

@end
