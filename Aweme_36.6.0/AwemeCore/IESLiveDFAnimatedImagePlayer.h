@class NSString;
@protocol IESLiveDFDisplayLinkPlayerDelegate;

@interface IESLiveDFAnimatedImagePlayer : NSObject <IESLiveDFDisplayLinkAnimation>

@property (nonatomic) unsigned long long maxFrameCache;
@property (weak, nonatomic) id<IESLiveDFDisplayLinkPlayerDelegate> playerDelegate;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long frameRateType;
@property (readonly, nonatomic) long long framesPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerWithImage:(id)a0;

- (void)updateTime:(double)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)prepare;
- (void)resume;

@end
