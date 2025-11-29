@class NSString;

@interface WALaunchTimeAxisEventNode : NSObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *parentPhase;
@property (copy, nonatomic) NSString *event;
@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned int option;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;

@end
