@class LiveSEIKTVProgress, LiveSEIKTVNote;

@interface LiveKTVInfo : WXPBGeneratedMessage

@property (retain, nonatomic) LiveSEIKTVProgress *ktvProgress;
@property (retain, nonatomic) LiveSEIKTVNote *ktvNote;

+ (void)initialize;

@end
