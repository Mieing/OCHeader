@class NSData, NSString;

@interface FinderLiveLayerShowInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSData *showBuffer;
@property (nonatomic) unsigned int accumulatedSeconds;
@property (retain, nonatomic) NSString *pauseWording;

+ (void)initialize;

- (void)setPauseWording:(id)a0;
- (id)pauseWording;
- (void)setAccumulatedSeconds:(unsigned int)a0;
- (unsigned int)accumulatedSeconds;
- (void)setShowBuffer:(id)a0;
- (id)showBuffer;
- (void)setShowType:(unsigned int)a0;
- (unsigned int)showType;

@end
