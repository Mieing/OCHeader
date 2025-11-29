@class NSString;

@interface FinderLiveButtonAnimationInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int buttonType;
@property (nonatomic) unsigned int animationType;
@property (retain, nonatomic) NSString *animationUrl;
@property (nonatomic) unsigned int timeInterval;
@property (nonatomic) unsigned int isLoopPlay;
@property (nonatomic) unsigned int loopTimeInterval;

+ (void)initialize;

@end
