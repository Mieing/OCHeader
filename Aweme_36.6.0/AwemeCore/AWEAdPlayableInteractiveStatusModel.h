@interface AWEAdPlayableInteractiveStatusModel : NSObject

@property (nonatomic) unsigned long long componentType;
@property (nonatomic) double totalPlayTime;
@property (nonatomic) long long replayCount;
@property (nonatomic) long long playableEnterFrom;
@property (nonatomic) long long playableSequence;
@property (nonatomic) double stayDuration;
@property (nonatomic) double firstPlayDuration;
@property (nonatomic) double firstInterationTimestamp;

@end
