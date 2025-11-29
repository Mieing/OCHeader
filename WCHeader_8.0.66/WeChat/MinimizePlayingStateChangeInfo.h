@interface MinimizePlayingStateChangeInfo : NSObject

@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned long long startTimeStamp;

+ (id)stateChangeInfoWithNewState:(unsigned int)a0;

@end
