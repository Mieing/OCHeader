@interface WCFinderFeedAutoClearScreenDataModel : NSObject

@property (nonatomic) double startPlayTime;
@property (nonatomic) double maxPlayTime;
@property (nonatomic) BOOL hasOCROverLap;

+ (unsigned long long)autoClearScreenType;
+ (BOOL)hasPlayEnoughWithMaxPlayTime:(double)a0 startPlayTime:(double)a1;

- (BOOL)isInAutoClearScreenState;
- (BOOL)updateWithVideoPlayPositionCheckStateChange:(double)a0;
- (BOOL)hasPlayEnough;

@end
