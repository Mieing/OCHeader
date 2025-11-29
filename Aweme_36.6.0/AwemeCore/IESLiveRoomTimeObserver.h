@interface IESLiveRoomTimeObserver : NSObject

@property (nonatomic) long long liveTime;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;

@end
