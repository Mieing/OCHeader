@interface IESLiveLinkRTCAudioFrameObserver : NSObject

@property (copy, nonatomic) id /* block */ audioFrameCallback;
@property (copy, nonatomic) id /* block */ userAudioFrameCallback;

- (void).cxx_destruct;

@end
