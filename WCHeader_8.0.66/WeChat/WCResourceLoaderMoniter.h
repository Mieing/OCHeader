@class WCPlayerReporter;

@interface WCResourceLoaderMoniter : NSObject

@property (nonatomic) long long currentRequestLength;
@property (nonatomic) unsigned int currentSameCount;
@property (nonatomic) unsigned int threshold;
@property (nonatomic) unsigned int taskId;
@property (retain, nonatomic) WCPlayerReporter *reporter;

- (id)init;
- (BOOL)shouldLowerPriorityWithLoadingRequest:(id)a0;
- (void).cxx_destruct;

@end
