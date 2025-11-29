@interface IESGCPTrackerUIControlClickModel : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) unsigned long long events;

- (void).cxx_destruct;

@end
