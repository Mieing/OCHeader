@class NSString;

@interface IESLiveDFDisplayLink : NSObject <IESLiveDFDisplayLinkAnimation> {
    id _target;
    SEL _aSEL;
}

@property (copy, nonatomic) id /* block */ iesLiveDFInvokeBlock;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long frameRateType;
@property (readonly, nonatomic) long long framesPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iesLive_displayLinkWithBlock:(id /* block */)a0;
- (void)updateTime:(double)a0;
- (void)iesLiveDF_handleDispLink:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)invalidate;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)stop;
- (void)prepare;
- (void)start;
- (void)resume;
- (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;

@end
