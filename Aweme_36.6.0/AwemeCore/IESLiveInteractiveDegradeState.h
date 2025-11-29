@interface IESLiveInteractiveDegradeState : NSObject

@property (nonatomic) long long level;
@property (nonatomic) long long triggerTime;
@property (nonatomic) unsigned long long scene;

- (id)deepCopy;

@end
