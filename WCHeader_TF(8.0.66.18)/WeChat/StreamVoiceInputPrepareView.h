@class NSArray, NSMutableArray;

@interface StreamVoiceInputPrepareView : MMUIView

@property (retain, nonatomic) NSMutableArray *dots;
@property (retain, nonatomic) NSArray *animationKeyTimes;

- (id)init;
- (void)startPlayAnimation;
- (void)stopPlayAnimation;
- (void).cxx_destruct;

@end
