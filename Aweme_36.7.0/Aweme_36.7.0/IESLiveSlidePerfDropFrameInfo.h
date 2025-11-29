@class NSString;

@interface IESLiveSlidePerfDropFrameInfo : NSObject

@property (nonatomic) double timestamp;
@property (readonly, nonatomic) NSString *dropFrameLevel;
@property (nonatomic) unsigned long long dropFrameCount;
@property (nonatomic) double frameDuration;
@property (nonatomic) double frameLostTime;
@property (nonatomic) double hitchTime;

- (long long)level;

@end
